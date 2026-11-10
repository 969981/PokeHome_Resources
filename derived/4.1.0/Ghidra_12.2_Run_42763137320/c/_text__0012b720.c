/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0012b720; name: FUN_.text__0012b720
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN__text__0012b720(long param_1)

{
  long *plVar1;
  long *plVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  code *pcVar6;
  code *pcVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  code *local_100;
  long local_f8;
  code *local_f0;
  code *local_e8;
  code *local_e0;
  undefined1 *local_d8;
  long alStack_d0 [12];
  long local_70 [2];
  
  lVar10 = *(long *)(param_1 + 0x18);
  if ((lVar10 == 0) || (*(long *)(param_1 + 0x1c0) != 0)) goto LAB__text__0012bb80;
  uVar11 = tpidr_el0;
  uVar11 = uVar11 & 0xffffffffffffe000;
  if (*(long *)(uVar11 + 0x98) == 0x10) goto LAB__text__0012bba8;
  pcVar7 = *(code **)(param_1 + 0x10);
  lVar5 = uVar11 + 0x18;
  *(code **)(lVar5 + *(long *)(uVar11 + 0x98) * 8) = pcVar7;
  *(long *)(uVar11 + 0x98) = *(long *)(uVar11 + 0x98) + 1;
  plVar2 = (long *)(**(code **)(*(long *)pcVar7 + 0x10))(pcVar7,0x200,0x10);
  if (plVar2 == (long *)0x0) {
    (**(code **)(*(long *)pcVar7 + 0xb8))(pcVar7);
  }
  FUN__text__003c97a4(plVar2,pcVar7,param_1 + 0xb0);
  plVar2[1] = (long)pcVar7;
  plVar2[2] = (long)plVar2;
  plVar2[3] = 0x200;
  plVar2[4] = 0x10;
  *(long *)(uVar11 + 0x98) = *(long *)(uVar11 + 0x98) + -1;
  plVar8 = plVar2 + 9;
  (**(code **)(*plVar8 + 0x10))(plVar8);
  lVar4 = param_1 + 0x1d0;
  FUN__text__003e5784(lVar4,0x7217fc,_DAT_0089f838);
  local_f0 = (code *)0x438078000000000;
  FUN__text__003e57b4(lVar4,&local_f0);
  if ((*(long *)(param_1 + 0x20) != 0) && (*(int *)(*(long *)(param_1 + 0x20) + 0xc90) != 0)) {
    local_d8 = &LAB__text__0012e280;
    pcVar6 = (code *)plVar2[0x2f];
    local_f0 = FUN__text__0012e130;
    local_e8 = FUN__text__0012e270;
    local_e0 = FUN__text__0012e274;
    alStack_d0[0] = param_1;
    if (pcVar6 == (code *)0x0) {
LAB__text__0012b894:
      (*local_e0)(alStack_d0,plVar2 + 0x32);
      plVar2[0x2e] = (long)local_f0;
      plVar2[0x2f] = (long)local_e8;
      plVar2[0x30] = (long)local_e0;
      plVar2[0x31] = (long)local_d8;
    }
    else {
      plVar2[0x30] = 0;
      plVar2[0x31] = 0;
      plVar2[0x2e] = 0;
      plVar2[0x2f] = 0;
      (*pcVar6)(plVar2 + 0x32);
      if (local_e0 != (code *)0x0) goto LAB__text__0012b894;
    }
    pcVar6 = local_e8;
    if (local_e8 != (code *)0x0) {
      local_e0 = (code *)0x0;
      local_d8 = (undefined1 *)0x0;
      local_f0 = (code *)0x0;
      local_e8 = (code *)0x0;
      (*pcVar6)(alStack_d0);
    }
  }
  local_f0 = pcVar7;
  FUN__text__0010e58c(&local_f8,pcVar7,&local_f0);
  local_70[0] = local_f8;
  if (local_f8 != 0) {
    (**(code **)(*(long *)(local_f8 + 0x48) + 0x10))();
  }
  plVar1 = (long *)(param_1 + 0x1c0);
  (**(code **)(*plVar2 + 0x28))(plVar2,local_70);
  if (local_70[0] != 0) {
    (**(code **)(*(long *)(local_70[0] + 0x48) + 0x18))();
  }
  if (*plVar1 != 0) {
    (**(code **)(*(long *)(*plVar1 + 0x48) + 0x18))();
  }
  *plVar1 = local_f8;
  FUN__text__003c8830(local_f8,0);
  if (*(long *)(local_f8 + 0x188) != 0) {
    lVar12 = *(long *)(local_f8 + 0x188) << 4;
    plVar2 = (long *)(*(long *)(local_f8 + 0x180) + 8);
    do {
      lVar9 = *plVar2;
      if (lVar9 != 0) {
        (**(code **)(*(long *)(lVar9 + 0x48) + 0x10))();
      }
      FUN__text__003e9668(lVar9,lVar4);
      (**(code **)(*(long *)(lVar9 + 0x48) + 0x18))((long *)(lVar9 + 0x48));
      lVar12 = lVar12 + -0x10;
      plVar2 = plVar2 + 2;
    } while (lVar12 != 0);
  }
  (**(code **)(*plVar8 + 0x18))(plVar8);
  if (*(char *)(param_1 + 0x4f9) != '\0') {
    FUN__text__0012bbac(&local_f0,pcVar7,plVar1);
    if (*(long *)(param_1 + 0x2b0) != 0) {
      (**(code **)(*(long *)(*(long *)(param_1 + 0x2b0) + 0x48) + 0x18))();
    }
    *(code **)(param_1 + 0x2b0) = local_f0;
    local_100 = local_f0;
    if (local_f0 != (code *)0x0) {
      (**(code **)(*(long *)(local_f0 + 0x48) + 0x10))();
    }
    FUN__text__003ba170(&local_f0,pcVar7,pcVar7,&local_100,param_1 + 0x2c0);
    if (*(long *)(param_1 + 0x3d0) != 0) {
      (**(code **)(*(long *)(*(long *)(param_1 + 0x3d0) + 0x48) + 0x18))();
    }
    pcVar6 = local_f0;
    local_f0 = (code *)0x0;
    *(code **)(param_1 + 0x3d0) = pcVar6;
    if (local_100 != (code *)0x0) {
      (**(code **)(*(long *)(local_100 + 0x48) + 0x18))(local_100 + 0x48);
      pcVar6 = *(code **)(param_1 + 0x3d0);
      local_100 = (code *)0x0;
    }
    FUN__text__003c03a4(pcVar6);
    if (*(long *)(param_1 + 0x3d0) != 0) {
      FUN__text__003c0330();
    }
  }
  puVar3 = (undefined8 *)(**(code **)(*(long *)pcVar7 + 0x10))(pcVar7,0xa0,0x10);
  if (*(long *)(uVar11 + 0x98) != 0x10) {
    *(code **)(lVar5 + *(long *)(uVar11 + 0x98) * 8) = pcVar7;
    *(long *)(uVar11 + 0x98) = *(long *)(uVar11 + 0x98) + 1;
    *puVar3 = pcVar7;
    puVar3[1] = 0xf0f0f0f0f0f0f0;
    puVar3[6] = 0;
    FUN__text__0012e290(puVar3 + 8,0x10,puVar3);
    *(long *)(uVar11 + 0x98) = *(long *)(uVar11 + 0x98) + -1;
    lVar4 = *(long *)(param_1 + 0x4b8);
    *(undefined8 **)(param_1 + 0x4b8) = puVar3;
    if (lVar4 != 0) {
      FUN__text__00129950(param_1 + 0x4c0);
    }
    *(code **)(param_1 + 0x4c0) = pcVar7;
    *(undefined8 *)(param_1 + 0x4c8) = 0xa0;
    *(undefined8 *)(param_1 + 0x4d0) = 0x10;
    puVar3 = (undefined8 *)(**(code **)(*(long *)pcVar7 + 0x10))(pcVar7,0xa0,0x10);
    if (*(long *)(uVar11 + 0x98) != 0x10) {
      *(code **)(lVar5 + *(long *)(uVar11 + 0x98) * 8) = pcVar7;
      *(long *)(uVar11 + 0x98) = *(long *)(uVar11 + 0x98) + 1;
      puVar3[6] = 0;
      *puVar3 = pcVar7;
      puVar3[1] = 0xf0f0f0f0f0f0f0;
      FUN__text__0012e290(puVar3 + 8,0x10,puVar3);
      *(long *)(uVar11 + 0x98) = *(long *)(uVar11 + 0x98) + -1;
      lVar5 = *(long *)(param_1 + 0x4d8);
      *(undefined8 **)(param_1 + 0x4d8) = puVar3;
      if (lVar5 != 0) {
        FUN__text__00129950(param_1 + 0x4e0);
      }
      *(code **)(param_1 + 0x4e0) = pcVar7;
      *(undefined8 *)(param_1 + 0x4e8) = 0xa0;
      *(undefined8 *)(param_1 + 0x4f0) = 0x10;
      if (*(long *)(param_1 + 0x1c0) != 0) {
        FUN__text__003c8d50(*(long *)(param_1 + 0x1c0),*(undefined1 *)(param_1 + 0x88));
      }
LAB__text__0012bb80:
      return lVar10 != 0;
    }
  }
LAB__text__0012bba8:
                    /* WARNING: Subroutine does not return */
  FUN__text__00102c10();
}


