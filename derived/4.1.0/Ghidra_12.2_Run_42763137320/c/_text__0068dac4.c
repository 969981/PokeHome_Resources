/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0068dac4; name: FUN_.text__0068dac4
 */


uint FUN__text__0068dac4(long param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  
  iVar1 = 0x2d;
  if (*(char *)(param_1 + 0x30) == '\0' || param_2 != 0x2011) {
    iVar1 = param_2;
  }
  lVar3 = FUN__text__0069128c(*(undefined8 *)(param_1 + 0x10),iVar1,*(undefined4 *)(param_1 + 0x18),
                              *(undefined2 *)(param_1 + 0x32));
  if ((lVar3 == 0) || ((*(byte *)(lVar3 + 0x38) & 0x42) != 0)) {
    if ((*(char *)(param_1 + 0x2f) != '\x02') &&
       (uVar4 = FUN__text__00691184(*(undefined8 *)(param_1 + 0x10),iVar1,
                                    *(undefined2 *)(param_1 + 0x32)), (uVar4 & 1) != 0)) {
      uVar2 = FUN__text__0069142c(*(undefined8 *)(param_1 + 0x10),iVar1,
                                  *(undefined4 *)(param_1 + 0x18),*(undefined2 *)(param_1 + 0x32));
      return uVar2 << 0x10 | (uVar2 & 0xff) << 8;
    }
    lVar3 = FUN__text__0069128c(*(undefined8 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x34),
                                *(undefined4 *)(param_1 + 0x18),*(undefined2 *)(param_1 + 0x32));
  }
  return (uint)*(byte *)(lVar3 + 0x4c) << 0x10 | (uint)*(byte *)(lVar3 + 0x48) << 8 |
         (uint)*(byte *)(lVar3 + 0x4e);
}


