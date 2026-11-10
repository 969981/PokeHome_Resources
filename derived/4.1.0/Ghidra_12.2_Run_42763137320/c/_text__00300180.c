/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00300180; name: FUN_.text__00300180
 */


void FUN__text__00300180(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  long lVar4;
  undefined8 uVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  undefined8 *puVar9;
  long lVar10;
  undefined8 *puVar11;
  
  uVar7 = tpidr_el0;
  uVar7 = uVar7 & 0xffffffffffffe000;
  if (*(long *)(uVar7 + 0x98) == 0x10) {
                    /* WARNING: Subroutine does not return */
    FUN__text__00102c10();
  }
  plVar6 = *(long **)(param_1 + 8);
  *(long **)(uVar7 + *(long *)(uVar7 + 0x98) * 8 + 0x18) = plVar6;
  *(long *)(uVar7 + 0x98) = *(long *)(uVar7 + 0x98) + 1;
  lVar4 = (**(code **)(*plVar6 + 0x10))(plVar6,0xb0,8);
  if (lVar4 == 0) {
    (**(code **)(*plVar6 + 0xb8))(plVar6);
  }
  FUN__text__003062f4(lVar4,plVar6,0,0,0);
  *(long **)(lVar4 + 8) = plVar6;
  *(long *)(lVar4 + 0x10) = lVar4;
  *(undefined8 *)(lVar4 + 0x18) = 0xb0;
  *(undefined8 *)(lVar4 + 0x20) = 8;
  *(long *)(uVar7 + 0x98) = *(long *)(uVar7 + 0x98) + -1;
  plVar6 = (long *)(lVar4 + 0x48);
  (**(code **)(*plVar6 + 0x10))(plVar6);
  lVar8 = 0;
  puVar9 = (undefined8 *)(param_1 + 0x2f0);
  do {
    lVar10 = 0x1e;
    puVar11 = puVar9;
    do {
      (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))(plVar6);
      FUN__text__005fc068(puVar11 + -0x53,*(undefined8 *)(lVar4 + 0x58));
      uVar5 = *(undefined8 *)(lVar4 + 0x68);
      *puVar11 = *(undefined8 *)(lVar4 + 0x60);
      puVar11[1] = uVar5;
      uVar1 = *(undefined8 *)(lVar4 + 0x88);
      uVar5 = *(undefined8 *)(lVar4 + 0x70);
      uVar2 = *(undefined8 *)(lVar4 + 0x78);
      puVar11[4] = *(undefined8 *)(lVar4 + 0x80);
      puVar11[5] = uVar1;
      puVar11[2] = uVar5;
      puVar11[3] = uVar2;
      uVar1 = *(undefined8 *)(lVar4 + 0xa8);
      uVar5 = *(undefined8 *)(lVar4 + 0x90);
      uVar2 = *(undefined8 *)(lVar4 + 0x98);
      puVar11[8] = *(undefined8 *)(lVar4 + 0xa0);
      puVar11[9] = uVar1;
      puVar11[6] = uVar5;
      puVar11[7] = uVar2;
      uVar3 = FUN__text__003065f8(lVar4);
      *(undefined4 *)(puVar11 + 10) = uVar3;
      uVar5 = FUN__text__00637404(*(undefined8 *)(lVar4 + 0x58));
      puVar11[0xb] = uVar5;
      (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))(plVar6);
      puVar11[8] = 0;
      puVar11[9] = 0;
      lVar10 = lVar10 + -1;
      *(undefined1 *)(puVar11 + 0xc) = 0;
      *(undefined8 *)((long)puVar11 + 100) = 0;
      *(undefined8 *)((long)puVar11 + 0x6c) = 0;
      *(undefined8 *)((long)puVar11 + 0x74) = 0;
      *(undefined8 *)((long)puVar11 + 0x7c) = 0;
      *(undefined8 *)((long)puVar11 + 0x84) = 0;
      *(undefined8 *)((long)puVar11 + 0x8c) = 0;
      *(undefined4 *)((long)puVar11 + 0x94) = 0;
      puVar11[6] = 3;
      puVar11[7] = 0;
      puVar11[4] = 0;
      puVar11[5] = 0;
      puVar11[2] = 0;
      puVar11[3] = 0;
      *puVar11 = 0;
      puVar11[1] = 0;
      puVar11 = puVar11 + 0x66;
    } while (lVar10 != 0);
    lVar8 = lVar8 + 1;
    puVar9 = puVar9 + 0xbf4;
  } while (lVar8 != 300);
  memset((void *)(param_1 + 0x700fe0),0,0x2028);
                    /* WARNING: Could not recover jumptable at 0x00300364. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar6 + 0x18))(plVar6);
  return;
}


