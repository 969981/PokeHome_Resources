/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0053d990; name: FUN_.text__0053d990
 */


/* WARNING: Removing unreachable block (ram,0x0053dabc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN__text__0053d990(long *param_1,int param_2)

{
  uint uVar1;
  long lVar2;
  long *plVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  
  uVar4 = *(uint *)(param_1 + 1);
  uVar1 = *(int *)((long)param_1 + 0xc) + param_2;
  lVar5 = FUN__text__00400f90(0xb,(ulong)uVar1 * 0x50,0x10);
  if (lVar5 != 0) {
    lVar6 = *param_1;
    if ((lVar6 != 0) && (lVar6 != lVar5)) {
      if (uVar4 != 0) {
        lVar9 = 0;
        lVar6 = _DAT_008a4288 + 0x10;
        do {
          plVar3 = (long *)(lVar5 + lVar9);
          *plVar3 = lVar6;
          plVar3[2] = 0;
          plVar3[3] = 0;
          plVar3[1] = 0;
          plVar3[6] = 0;
          plVar3[4] = 0;
          *(undefined4 *)(plVar3 + 5) = 0;
          plVar3[9] = 0;
          plVar3[7] = 0;
          plVar3[8] = 0;
          lVar2 = *param_1 + lVar9;
          plVar3[7] = *(long *)(lVar2 + 0x38);
          *(undefined4 *)(plVar3 + 8) = *(undefined4 *)(lVar2 + 0x40);
          *(undefined4 *)((long)plVar3 + 0x44) = *(undefined4 *)(lVar2 + 0x44);
          *(undefined8 *)(lVar2 + 0x38) = 0;
          *(undefined8 *)(lVar2 + 0x40) = 0;
          plVar3[6] = *(long *)(lVar2 + 0x30);
          lVar8 = *(long *)(lVar2 + 0x18);
          lVar7 = *(long *)(lVar2 + 0x10);
          plVar3[1] = *(long *)(lVar2 + 8);
          plVar3[2] = lVar7;
          plVar3[3] = lVar8;
          lVar7 = *(long *)(lVar2 + 0x20);
          *(undefined4 *)(plVar3 + 5) = *(undefined4 *)(lVar2 + 0x28);
          plVar3[4] = lVar7;
          *(undefined4 *)(plVar3 + 9) = *(undefined4 *)(lVar2 + 0x48);
          *(undefined4 *)((long)plVar3 + 0x4c) = *(undefined4 *)(lVar2 + 0x4c);
          (*(code *)**(undefined8 **)(*param_1 + lVar9))();
          lVar9 = lVar9 + 0x50;
        } while ((ulong)uVar4 * 0x50 != lVar9);
        lVar6 = *param_1;
      }
      FUN__text__00400fc0(0xb,lVar6);
    }
    *param_1 = lVar5;
    *(uint *)((long)param_1 + 0xc) = uVar1;
  }
  return lVar5 != 0;
}


