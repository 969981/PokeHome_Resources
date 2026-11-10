/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006a01e4; name: FUN_.text__006a01e4
 */


void FUN__text__006a01e4(long param_1,undefined8 param_2,undefined8 param_3,long param_4,
                        undefined8 param_5,uint param_6)

{
  undefined8 uVar1;
  undefined4 uVar2;
  
  *(undefined8 *)(param_1 + 0x30) = param_3;
  *(undefined8 *)(param_1 + 0x38) = param_5;
  if (*(char *)(param_4 + 0x22) != '\0') {
    *(ushort *)(param_1 + 0x60) = *(ushort *)(param_1 + 0x60) | 1;
  }
  if (*(char *)(param_4 + 0x23) != '\0') {
    *(ushort *)(param_1 + 0x60) = *(ushort *)(param_1 + 0x60) | 2;
  }
  if ((param_6 & 1) != 0) {
    *(ushort *)(param_1 + 0x60) = *(ushort *)(param_1 + 0x60) | 0x10;
  }
  *(uint *)(param_1 + 0x44) = (uint)*(ushort *)(param_4 + 0x20);
  uVar1 = *(undefined8 *)(param_4 + 0x10);
  *(undefined8 *)(param_1 + 0x58) = *(undefined8 *)(param_4 + 0x18);
  *(undefined8 *)(param_1 + 0x50) = uVar1;
  *(uint *)(param_1 + 0x40) = (uint)*(ushort *)(param_4 + 0x24);
  uVar2 = FUN__text__006c19b0(param_4);
  *(undefined4 *)(param_1 + 0x28) = uVar2;
  if ((*(ushort *)(param_1 + 0x60) & 0x12) == 0) {
    return;
  }
  FUN__text__006a02a8(param_1,param_2,*(undefined8 *)(param_1 + 0x30),0);
  return;
}


