/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0053e0d0; name: FUN_.text__0053e0d0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN__text__0053e0d0(long *param_1,int param_2)

{
  uint uVar1;
  long *plVar2;
  long lVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  
  uVar4 = *(uint *)(param_1 + 1);
  uVar1 = *(int *)((long)param_1 + 0xc) + param_2;
  lVar5 = FUN__text__00400f80(9,(ulong)uVar1 << 6);
  if (lVar5 != 0) {
    lVar6 = *param_1;
    if ((lVar6 != 0) && (lVar6 != lVar5)) {
      if (uVar4 != 0) {
        lVar9 = 0;
        lVar6 = _DAT_008a4290 + 0x10;
        do {
          plVar2 = (long *)(lVar5 + lVar9);
          plVar2[6] = 0;
          plVar2[7] = 0;
          plVar2[4] = 0;
          *(undefined4 *)(plVar2 + 5) = 0;
          *plVar2 = lVar6;
          plVar2[1] = 0;
          plVar2[2] = 0;
          plVar2[3] = 0;
          lVar3 = *param_1 + lVar9;
          plVar2[6] = *(long *)(lVar3 + 0x30);
          *(undefined4 *)(plVar2 + 7) = *(undefined4 *)(lVar3 + 0x38);
          *(undefined4 *)((long)plVar2 + 0x3c) = *(undefined4 *)(lVar3 + 0x3c);
          *(undefined8 *)(lVar3 + 0x30) = 0;
          *(undefined8 *)(lVar3 + 0x38) = 0;
          lVar7 = *(long *)(lVar3 + 8);
          lVar8 = *(long *)(lVar3 + 0x18);
          plVar2[2] = *(long *)(lVar3 + 0x10);
          plVar2[3] = lVar8;
          plVar2[1] = lVar7;
          lVar7 = *(long *)(lVar3 + 0x20);
          *(undefined4 *)(plVar2 + 5) = *(undefined4 *)(lVar3 + 0x28);
          plVar2[4] = lVar7;
          (*(code *)**(undefined8 **)(*param_1 + lVar9))();
          lVar9 = lVar9 + 0x40;
        } while ((ulong)uVar4 * 0x40 != lVar9);
        lVar6 = *param_1;
      }
      FUN__text__00400fc0(9,lVar6);
    }
    *param_1 = lVar5;
    *(uint *)((long)param_1 + 0xc) = uVar1;
  }
  return lVar5 != 0;
}


