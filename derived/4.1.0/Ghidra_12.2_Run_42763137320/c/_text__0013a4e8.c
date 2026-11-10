/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0013a4e8; name: FUN_.text__0013a4e8
 */


void FUN__text__0013a4e8(long param_1,uint param_2,byte param_3)

{
  long lVar1;
  long lVar2;
  
  lVar1 = (ulong)(param_2 << 2) * 8;
  lVar2 = 0x721e58;
  if (*(int *)(param_1 + 0x64c) != 0) {
    lVar2 = 0x722118;
  }
  lVar2 = FUN__text__003c79c0(*(undefined8 *)(param_1 + 0x2d0),lVar2 + lVar1);
  *(byte *)(lVar2 + 0x58) = *(byte *)(lVar2 + 0x58) & 0xfe | param_3 != 0;
  lVar2 = 0x721e58;
  if (*(int *)(param_1 + 0x64c) != 0) {
    lVar2 = 0x722118;
  }
  lVar2 = FUN__text__003c79c0(*(undefined8 *)(param_1 + 0x2d0),lVar2 + lVar1 + 8);
  *(byte *)(lVar2 + 0x58) = *(byte *)(lVar2 + 0x58) & 0xfe | 1 < param_3;
  lVar2 = 0x721e58;
  if (*(int *)(param_1 + 0x64c) != 0) {
    lVar2 = 0x722118;
  }
  lVar2 = FUN__text__003c79c0(*(undefined8 *)(param_1 + 0x2d0),lVar2 + lVar1 + 0x10);
  *(byte *)(lVar2 + 0x58) = *(byte *)(lVar2 + 0x58) & 0xfe | 2 < param_3;
  lVar2 = 0x721e58;
  if (*(int *)(param_1 + 0x64c) != 0) {
    lVar2 = 0x722118;
  }
  lVar2 = FUN__text__003c79c0(*(undefined8 *)(param_1 + 0x2d0),lVar2 + lVar1 + 0x18);
  *(byte *)(lVar2 + 0x58) = *(byte *)(lVar2 + 0x58) & 0xfe | 3 < param_3;
  lVar2 = 0x7222f8;
  if (*(int *)(param_1 + 0x64c) != 0) {
    lVar2 = 0x722630;
  }
  FUN__text__0013b640(*(undefined8 *)(param_1 + 0x2d0),lVar2 + (ulong)param_2 * 8);
  FUN__text__006c6e4c();
  return;
}


