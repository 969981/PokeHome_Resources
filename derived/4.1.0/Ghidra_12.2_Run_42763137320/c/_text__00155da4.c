/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00155da4; name: FUN_.text__00155da4
 */


void FUN__text__00155da4(undefined8 param_1,uint *param_2,ulong param_3)

{
  uint uVar1;
  ulong uVar2;
  uint *local_40;
  ulong uStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  
  if (param_2 == (uint *)0x0) {
    FUN__text__00155348(param_1);
    return;
  }
  local_30 = 0x4000000000;
  uStack_28 = 0xf424000000000;
  local_40 = param_2;
  uStack_38 = param_3;
  if (4 < param_3) {
    uVar1 = *param_2;
    if ((((-1 < (int)uVar1) && (uVar1 != 0)) && ((ulong)uVar1 <= param_3 - 1)) &&
       (uVar2 = FUN__text__00155e54((long)param_2 + (ulong)uVar1,&local_40), (uVar2 & 1) != 0)) {
      FUN__text__0015533c(param_1,(long)param_2 + (ulong)*param_2,0);
      return;
    }
  }
  FUN__text__00155348(param_1);
  return;
}


