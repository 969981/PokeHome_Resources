/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0036e484; name: FUN_.text__0036e484
 */


void FUN__text__0036e484(undefined8 param_1,undefined8 param_2,int param_3)

{
  uint uVar1;
  undefined8 uVar2;
  ulong uVar3;
  uint uVar4;
  int local_3c;
  ushort local_38;
  undefined4 local_34;
  undefined2 local_30;
  undefined4 local_2c;
  int iStack_28;
  int local_24;
  
  local_3c = 0;
  local_38 = 0;
  local_34 = 0;
  local_30 = 0;
  local_2c = 0;
  iStack_28 = 0;
  local_24 = -1;
  uVar2 = FUN__text__00205d60(&local_3c);
  if (param_3 == 1) {
    iStack_28 = 0;
  }
  else {
    if (param_3 == 2) {
      uVar3 = FUN__text__0036dbe0(uVar2,local_3c);
      param_3 = 2;
      if ((uVar3 & 1) == 0) {
        param_3 = 0;
      }
    }
    iStack_28 = param_3;
  }
  if ((local_30._1_1_ != '\0') || (uVar3 = FUN__text__0036dea0(param_1,&local_3c), (uVar3 & 1) != 0)
     ) {
    return;
  }
  uVar4 = local_24 + (uint)local_38 * 7;
  if (local_3c != 0x365) {
    uVar4 = (uint)local_38;
  }
  uVar1 = 0;
  if (uVar4 < 0x3f) {
    uVar1 = uVar4;
  }
  FUN__text__0036d8b0(param_1,local_3c,local_34,(undefined1)local_30,uVar1,iStack_28);
  return;
}


