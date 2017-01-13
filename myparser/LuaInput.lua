-- This is just a bunch of random lua off of rosetta code

-- defines a factorial function
function fact (n)
  if n == 0 then
    return 1
  else
    return n * fact(n-1)
  end
end

function gnomeSort(a)
  local i, j = 2, 3

  while i < #a do
    if a[i-1] <= a[i] then
      i = j
      j = j + 1
    else
      a[i-1], a[i] = a[i], a[i-1] -- swap
      i = i - 1
      if i == 1 then -- 1 instead of 0
        i = j
        j = j + 1
      end
    end
  end
end

local http = require("socket.http")    -- Debian package is 'lua-socket'

function scrapeTime (pageAddress, timeZone)
  local page = http.request(pageAddress)
  if not page then return "Cannot connect" end
  for line in page:gmatch("[^<BR>]*") do
    if line:match(timeZone) then
      return line:match("%d+:%d+:%d+")
    end
  end
end

function love.load ()
  love.window.setTitle("Polyspiral")
  incr = 0
end

function love.update (dt)
  incr = (incr + 0.05) % 360
  x1 = love.graphics.getWidth() / 2
  y1 = love.graphics.getHeight() / 2
  length = 5
  angle = incr
end

function love.draw ()
  for i = 1, 150 do
    x2 = x1 + math.cos(angle) * length
    y2 = y1 + math.sin(angle) * length
    love.graphics.line(x1, y1, x2, y2)
    x1, y1 = x2, y2
    length = length + 3
    angle = (angle + incr) % 360
  end
end

local url = "http://tycho.usno.navy.mil/cgi-bin/timer.pl"
print(scrapeTime(url, "UTC"))
 
print("enter a number:")
a = io.read("*number")        -- read a number
print(fact(a))

