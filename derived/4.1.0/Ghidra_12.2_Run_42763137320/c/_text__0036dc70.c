/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0036dc70; name: FUN_.text__0036dc70
 */


void FUN__text__0036dc70(undefined8 param_1,undefined8 param_2,int param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined4 local_4c;
  undefined2 local_48;
  undefined4 local_44;
  undefined2 local_40;
  undefined8 local_3c;
  undefined4 local_34;
  
  local_4c = 0;
  local_48 = 0;
  local_44 = 0;
  local_40 = 0;
  local_3c = 0;
  local_34 = 0xffffffff;
  uVar2 = FUN__text__00205d60(&local_4c);
  if (param_3 == 1) {
    param_3 = 0;
  }
  else if (param_3 == 2) {
    uVar3 = FUN__text__0036dbe0(uVar2,local_4c);
    param_3 = 2;
    if ((uVar3 & 1) == 0) {
      param_3 = 0;
    }
  }
  local_3c = CONCAT44(param_3,(undefined4)local_3c);
  uVar1 = FUN__text__006312d0(param_2);
  FUN__text__0036dd10(param_1,&local_4c,uVar1);
  return;
}


