/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::001d1464; name: FUN_.text__001d1464
 */


void FUN__text__001d1464(long param_1,char *param_2)

{
  long lVar1;
  bool bVar2;
  byte bVar3;
  undefined8 uVar4;
  undefined8 local_18;
  
  local_18 = 0;
  if (*param_2 != '\0') {
    local_18 = *(undefined8 *)(param_2 + 4);
  }
  lVar1 = *(long *)(param_1 + 8) + 0x110;
  bVar2 = *param_2 != '\0';
  uVar4 = FUN__text__0012cb14(lVar1,param_1 + 0xd0);
  bVar3 = FUN__text__001cabfc(param_1,bVar2,&local_18,uVar4);
  *(undefined4 *)(param_1 + 0xf8) = 0;
  *(byte *)(param_1 + 0xfc) = bVar3 & 1;
  uVar4 = FUN__text__0012cb14(lVar1,param_1 + 0x140);
  bVar3 = FUN__text__001cabfc(param_1,bVar2,&local_18,uVar4);
  *(undefined4 *)(param_1 + 0x168) = 0;
  *(byte *)(param_1 + 0x16c) = bVar3 & 1;
  uVar4 = FUN__text__0012cb14(lVar1,param_1 + 0x1b0);
  bVar3 = FUN__text__001cabfc(param_1,bVar2,&local_18,uVar4);
  *(undefined4 *)(param_1 + 0x1c0) = 0;
  *(byte *)(param_1 + 0x1c4) = bVar3 & 1;
  return;
}


