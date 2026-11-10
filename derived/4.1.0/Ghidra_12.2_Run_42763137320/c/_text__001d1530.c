/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::001d1530; name: FUN_.text__001d1530
 */


void FUN__text__001d1530(long param_1,char *param_2)

{
  long lVar1;
  char cVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 local_38;
  
  local_38 = 0;
  cVar2 = *param_2;
  lVar1 = *(long *)(param_1 + 8) + 0x110;
  if (cVar2 != '\0') {
    local_38 = *(undefined8 *)(param_2 + 4);
  }
  if (*(char *)(param_1 + 0xfc) != '\0') {
    uVar3 = FUN__text__0012cb14(lVar1,param_1 + 0xd0);
    uVar4 = FUN__text__001cabfc(param_1,cVar2 != '\0',&local_38,uVar3);
    if ((uVar4 & 1) == 0) {
      *(undefined1 *)(param_1 + 0xfc) = 0;
      *(undefined4 *)(param_1 + 0xf8) = 0;
    }
  }
  if (*(char *)(param_1 + 0x16c) != '\0') {
    uVar3 = FUN__text__0012cb14(lVar1,param_1 + 0x140);
    uVar4 = FUN__text__001cabfc(param_1,cVar2 != '\0',&local_38,uVar3);
    if ((uVar4 & 1) == 0) {
      *(undefined1 *)(param_1 + 0x16c) = 0;
      *(undefined4 *)(param_1 + 0x168) = 0;
    }
  }
  if (*(char *)(param_1 + 0x1c4) != '\0') {
    uVar3 = FUN__text__0012cb14(lVar1,param_1 + 0x1b0);
    uVar4 = FUN__text__001cabfc(param_1,cVar2 != '\0',&local_38,uVar3);
    if ((uVar4 & 1) == 0) {
      *(undefined1 *)(param_1 + 0x1c4) = 0;
      *(undefined4 *)(param_1 + 0x1c0) = 0;
    }
  }
  return;
}


