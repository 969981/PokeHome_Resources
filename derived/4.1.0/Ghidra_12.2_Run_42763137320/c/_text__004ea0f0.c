/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004ea0f0; name: FUN_.text__004ea0f0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__004ea0f0(long param_1,ulong param_2,int param_3,uint param_4,undefined4 param_5)

{
  undefined8 *puVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint local_78;
  undefined1 auStack_74 [36];
  uint local_38;
  uint local_34;
  
  if (param_4 != 0) {
    FUN__text__004e9a18(param_1,param_2,auStack_74);
    if ((param_4 >> 0xd & 1) != 0) {
      FUN__text__004f4830(*(undefined8 *)(*(long *)(param_1 + 0x18) + 0x78),param_5,auStack_74,
                          param_2 & 0xffffffff,param_3);
    }
    iVar3 = (int)param_2;
    if (((iVar3 < 1) && ((param_4 >> 10 & 1) != 0)) && (0 < param_3 + iVar3)) {
      FUN__text__0048d970(*_DAT_008a45d8,param_5,0x400,auStack_74);
    }
    FUN__text__004f48fc(*(undefined8 *)(*(long *)(param_1 + 0x18) + 0x78),param_2 & 0xffffffff,
                        param_3,&local_34,&local_38,&local_78);
    puVar1 = _DAT_008a45d8;
    if (((param_4 >> 9 & 1) != 0) && (local_34 != 0)) {
      uVar4 = 0;
      do {
        FUN__text__0048d970(*puVar1,param_5,0x200,auStack_74);
        uVar4 = uVar4 + 1;
      } while (uVar4 < local_34);
    }
    puVar1 = _DAT_008a45d8;
    if (((param_4 >> 8 & 1) != 0) && (local_38 != 0)) {
      uVar4 = 0;
      do {
        FUN__text__0048d970(*puVar1,param_5,0x100,auStack_74);
        uVar4 = uVar4 + 1;
      } while (uVar4 < local_38);
    }
    puVar1 = _DAT_008a45d8;
    if (((param_4 >> 0xc & 1) != 0) && (local_78 != 0)) {
      uVar4 = 0;
      do {
        FUN__text__0048d970(*puVar1,param_5,0x1000,auStack_74);
        uVar4 = uVar4 + 1;
      } while (uVar4 < local_78);
    }
    if (((param_4 >> 0xb & 1) != 0) &&
       (iVar2 = FUN__text__004f4810(*(undefined8 *)(*(long *)(param_1 + 0x18) + 0x78)),
       iVar3 <= iVar2 && iVar2 < param_3 + iVar3)) {
      FUN__text__0048d970(*_DAT_008a45d8,param_5,0x800,auStack_74);
    }
  }
  return;
}


