/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004ecea0; name: FUN_.text__004ecea0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__004ecea0(long param_1,long param_2)

{
  int iVar1;
  byte bVar2;
  int iVar3;
  undefined1 auVar4 [16];
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  long lVar10;
  long lVar11;
  undefined4 local_68;
  uint local_64;
  
  if (*(long *)(param_1 + 0x80) != 0 && *(char *)(param_1 + 0x94) != '\0') {
    local_64 = FUN__text__004f53e0(*(undefined8 *)(param_1 + 0x10));
    lVar10 = *(long *)(param_2 + 0x50);
    lVar11 = *(long *)(lVar10 + 0x138);
    bVar2 = *(byte *)(lVar11 + 0x20) & 0x1f;
    if (bVar2 != 8) {
      if ((*(byte *)(param_1 + 0x5a) & 1) == 0) {
        FUN__text__004ed850(param_1 + 0x60);
        FUN__text__004ecab0(param_1);
        return;
      }
      iVar3 = *(int *)(lVar11 + 0x3c);
      uVar5 = local_64 - iVar3;
      auVar4 = SEXT816((long)((ulong)*_DAT_008a4b68 * (long)*(int *)(lVar11 + 0x28))) *
               SEXT816(-0x20c49ba5e353f7cf);
      iVar1 = *(int *)(lVar11 + 0x30) + ((int)(auVar4._8_8_ >> 7) - (auVar4._12_4_ >> 0x1f));
      uVar6 = local_64 - iVar1;
      if ((int)local_64 <= (int)uVar6) {
        local_64 = uVar6;
      }
      if ((int)local_64 <= (int)uVar5) {
        local_64 = uVar5;
      }
      local_64 = local_64 & ((int)local_64 >> 0x1f ^ 0xffffffffU);
      local_68 = *(undefined4 *)(lVar11 + 0x24);
      iVar8 = FUN__text__004f41e0(*(undefined8 *)(param_1 + 0x78),local_64,bVar2,&local_68,0,
                                  &local_64);
      if (iVar8 == 1) {
        do {
          uVar7 = local_64;
          iVar8 = FUN__text__004f47e8(*(undefined8 *)(param_1 + 0x78));
          iVar8 = FUN__text__004efda0(lVar10,iVar8 + uVar7);
          uVar6 = iVar8 + uVar5;
          if ((int)uVar6 <= (int)uVar7) {
            iVar9 = FUN__text__004f4810(*(undefined8 *)(param_1 + 0x78));
            if ((int)uVar7 < iVar9) {
              iVar3 = uVar7 + iVar3;
              iVar1 = uVar7 + iVar1;
              iVar8 = iVar3 - iVar8;
              FUN__text__004ed0b0(param_1,param_2,iVar1,iVar8);
              FUN__text__004ed1f0(param_1,param_2,iVar1,(int *)(lVar11 + 0x28));
              FUN__text__004ed390(param_1,param_2,iVar8,iVar3,lVar11 + 0x34);
              FUN__text__004ecd40(param_1,uVar7,lVar10);
              return;
            }
            return;
          }
          local_68 = *(undefined4 *)(lVar11 + 0x24);
          local_64 = uVar6;
          iVar8 = FUN__text__004f41e0(*(undefined8 *)(param_1 + 0x78),uVar6,
                                      *(byte *)(lVar11 + 0x20) & 0x1f,&local_68,0,&local_64);
        } while (iVar8 == 1);
      }
    }
  }
  return;
}


