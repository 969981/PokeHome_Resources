/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006e2d48; name: FUN_.text__006e2d48
 */


uint FUN__text__006e2d48(long param_1,undefined8 param_2,long param_3,uint param_4,
                        undefined8 param_5,int *param_6)

{
  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined8 local_60;
  long lStack_58;
  ulong local_50;
  undefined8 uStack_48;
  ulong local_40;
  int *piStack_38;
  
  local_40 = (ulong)(param_4 == 3);
  iVar1 = *param_6;
  uVar3 = 0;
  local_50 = (ulong)param_4;
  if (param_4 != 3) {
    uVar3 = *(undefined8 *)(*(long *)(param_3 + 0x238) + (ulong)param_4 * 8 + 0x340);
  }
  *(undefined8 *)(*(long *)(param_1 + 0x10) + (long)iVar1 * 0x9e8 + 0x9b8) = uVar3;
  *(undefined4 *)(*(long *)(param_1 + 0x10) + (long)iVar1 * 0x9e8 + 0x9c0) = 6;
  local_60 = param_2;
  lStack_58 = param_3;
  uStack_48 = param_5;
  piStack_38 = param_6;
  uVar2 = FUN__text__006d74b0(&local_60);
  if ((uVar2 & 1) != 0) {
    if (*(code **)(param_3 + 0x3f8) != (code *)0x0) {
      (**(code **)(param_3 + 0x3f8))(&local_60);
    }
    iVar1 = *param_6;
    *(undefined8 *)(*(long *)(param_1 + 0x10) + (long)iVar1 * 0x9e8 + 0x9b8) = 0;
    *(undefined4 *)(*(long *)(param_1 + 0x10) + (long)iVar1 * 0x9e8 + 0x9c0) = 6;
  }
  return uVar2 & 1;
}


