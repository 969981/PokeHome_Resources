/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006901b0; name: FUN_.text__006901b0
 */


byte FUN__text__006901b0(long param_1,int param_2,undefined4 param_3,uint param_4,uint param_5,
                        byte param_6)

{
  int iVar1;
  byte bVar2;
  ulong uVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  int iVar8;
  uint local_44 [17];
  
  while( true ) {
    local_44[0] = 0;
    iVar1 = 0x2d;
    if ((param_2 == 0x2011 & param_6) == 0) {
      iVar1 = param_2;
    }
    uVar3 = FUN__text__00690390(param_1,local_44,param_4 & 0xffff,iVar1);
    param_4 = local_44[0];
    if ((uVar3 & 1) == 0) {
      return 0;
    }
    lVar6 = param_1 + 0x30;
    lVar4 = FUN__text__00691ba0(lVar6,iVar1,param_3,local_44[0]);
    if (lVar4 != 0) {
      bVar2 = *(byte *)(lVar4 + 0x38);
      *(byte *)(lVar4 + 0x38) = bVar2 | 1;
      if (-1 < (int)param_5) {
        *(uint *)(lVar4 + 0x3c) = *(uint *)(lVar4 + 0x3c) | 1 << (ulong)(param_5 & 0x1f);
      }
      return bVar2 >> 1 & 1;
    }
    plVar5 = (long *)FUN__text__00691bec(lVar6,iVar1,param_3,param_4);
    if (plVar5 != (long *)0x0) {
      *(byte *)(plVar5 + 7) = *(byte *)(plVar5 + 7) | 3;
      if (-1 < (int)param_5) {
        *(uint *)((long)plVar5 + 0x3c) =
             *(uint *)((long)plVar5 + 0x3c) | 1 << (ulong)(param_5 & 0x1f);
      }
      lVar6 = *plVar5;
      plVar7 = (long *)(param_1 + 0x50);
      *plVar5 = *plVar7;
      *(long **)(lVar6 + 8) = plVar7;
      *(long **)(*plVar7 + 8) = plVar5;
      *plVar7 = lVar6;
      return 1;
    }
    if (*(long **)(param_1 + 0x78) == (long *)(param_1 + 0x70)) break;
    iVar8 = 0;
    plVar5 = *(long **)(param_1 + 0x78);
    do {
      plVar7 = (long *)plVar5[1];
      if ((*(byte *)(plVar5 + 7) & 0x11) == 0) {
        lVar4 = *plVar7;
        *(long **)(*plVar5 + 8) = plVar7;
        *plVar7 = *plVar5;
        *(long **)(lVar4 + 8) = plVar5;
        *plVar5 = lVar4;
        FUN__text__00691e30(lVar6,(int)plVar5[6],*(undefined2 *)((long)plVar5 + 0x36),
                            *(undefined2 *)((long)plVar5 + 0x34));
        iVar8 = iVar8 + 1;
      }
      plVar5 = plVar7;
    } while (plVar7 != (long *)(param_1 + 0x70));
    if (iVar8 == 0) break;
    param_6 = 0;
    param_2 = iVar1;
  }
  *(undefined4 *)(param_1 + 0x1bcc) = 1;
  return 0;
}


