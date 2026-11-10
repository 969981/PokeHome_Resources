/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::001078c4; name: FUN_.text__001078c4
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN__text__001078c4(undefined8 param_1,long *param_2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  code *pcVar5;
  undefined8 *puVar6;
  long *plVar7;
  ulong uVar8;
  
  uVar8 = tpidr_el0;
  uVar8 = uVar8 & 0xffffffffffffe000;
  if (*(long *)(uVar8 + 0x98) == 0x10) {
                    /* WARNING: Subroutine does not return */
    FUN__text__00102c10();
  }
  *(long **)(uVar8 + 0x18 + *(long *)(uVar8 + 0x98) * 8) = param_2;
  *(long *)(uVar8 + 0x98) = *(long *)(uVar8 + 0x98) + 1;
  puVar2 = (undefined8 *)(**(code **)(*param_2 + 0x10))(param_2,0x410,0x10);
  if (puVar2 != (undefined8 *)0x0) {
    memset(puVar2,0,0x410);
    *(undefined4 *)(puVar2 + 6) = 0;
    puVar2[2] = 0;
    puVar2[3] = 0;
    puVar2[4] = 0;
    puVar2[5] = 0;
    *puVar2 = 0x8677a8;
    if (uVar8 == 0) {
      uVar4 = 0;
    }
    else {
      uVar4 = 0;
      if (*(long *)(uVar8 + 0x98) != 0) {
        uVar4 = *(undefined8 *)(uVar8 + 0x18 + *(long *)(uVar8 + 0x98) * 8 + -8);
      }
    }
    *_DAT_0089f698 = 1;
    puVar2[0xb] = 0;
    puVar2[0xc] = 0;
    puVar2[0xd] = 0;
    *puVar2 = 0x867758;
    puVar2[1] = uVar4;
    puVar2[9] = 0x867788;
    puVar2[10] = 0;
    FUN__text__001199b0(puVar2 + 0xe);
    lVar1 = _DAT_0089f6a8;
    puVar2[0x36] = 0;
    puVar2[0x37] = 0;
    puVar2[0x38] = 0;
    puVar2[0x39] = 0;
    puVar2[0x46] = 0;
    puVar2[0x47] = 0;
    puVar2[0x48] = 0;
    puVar2[0x49] = 0;
    puVar2[0x56] = 0;
    puVar2[0x57] = 0;
    puVar2[0x58] = 0;
    puVar2[0x59] = 0;
    puVar2[0x66] = 0;
    puVar2[0x67] = 0;
    puVar2[0x34] = lVar1 + 0x10;
    puVar2[0x68] = 0;
    puVar2[0x69] = 0;
    puVar2[0x79] = 0;
    puVar2[0x78] = 0;
    puVar2[0x77] = 0;
    puVar2[0x76] = 0;
    FUN__text__0011b4ac(puVar2 + 0x7a);
    puVar2[0x81] = 0;
    puVar2[1] = param_2;
    puVar2[2] = puVar2;
    puVar2[3] = 0x410;
    puVar2[4] = 0x10;
    *(long *)(uVar8 + 0x98) = *(long *)(uVar8 + 0x98) + -1;
    return puVar2;
  }
  puVar3 = (undefined8 *)(**(code **)(*param_2 + 0xb8))(param_2);
  lVar1 = _DAT_0089f6a8;
  puVar6 = (undefined8 *)puVar3[0x76];
  puVar3[0x76] = 0;
  puVar3[0x34] = lVar1 + 0x10;
  puVar2 = puVar3;
  if (puVar6 != (undefined8 *)0x0) {
    (**(code **)*puVar6)(puVar6);
    puVar2 = (undefined8 *)
             (**(code **)(*(long *)puVar3[0x77] + 0x18))
                       ((long *)puVar3[0x77],puVar6,puVar3[0x78],puVar3[0x79]);
  }
  pcVar5 = (code *)puVar3[0x67];
  if (pcVar5 != (code *)0x0) {
    puVar3[0x69] = 0;
    puVar3[0x68] = 0;
    puVar3[0x67] = 0;
    puVar3[0x66] = 0;
    puVar2 = (undefined8 *)(*pcVar5)(puVar3 + 0x6a);
  }
  pcVar5 = (code *)puVar3[0x57];
  if (pcVar5 != (code *)0x0) {
    puVar3[0x59] = 0;
    puVar3[0x58] = 0;
    puVar3[0x57] = 0;
    puVar3[0x56] = 0;
    puVar2 = (undefined8 *)(*pcVar5)(puVar3 + 0x5a);
  }
  pcVar5 = (code *)puVar3[0x47];
  if (pcVar5 != (code *)0x0) {
    puVar3[0x49] = 0;
    puVar3[0x48] = 0;
    puVar3[0x47] = 0;
    puVar3[0x46] = 0;
    puVar2 = (undefined8 *)(*pcVar5)(puVar3 + 0x4a);
  }
  pcVar5 = (code *)puVar3[0x37];
  if (pcVar5 != (code *)0x0) {
    puVar3[0x38] = 0;
    puVar3[0x39] = 0;
    puVar3[0x36] = 0;
    puVar3[0x37] = 0;
    puVar2 = (undefined8 *)(*pcVar5)(puVar3 + 0x3a);
  }
  puVar6 = (undefined8 *)puVar3[0x1a];
  puVar3[0x1a] = 0;
  puVar3[0xe] = 0x8677e8;
  if (puVar6 != (undefined8 *)0x0) {
    (**(code **)*puVar6)(puVar6);
    puVar2 = (undefined8 *)
             (**(code **)(*(long *)puVar3[0x1b] + 0x18))
                       ((long *)puVar3[0x1b],puVar6,puVar3[0x1c],puVar3[0x1d]);
  }
  puVar6 = (undefined8 *)puVar3[0x16];
  puVar3[0x16] = 0;
  if (puVar6 != (undefined8 *)0x0) {
    (**(code **)*puVar6)(puVar6);
    puVar2 = (undefined8 *)
             (**(code **)(*(long *)puVar3[0x17] + 0x18))
                       ((long *)puVar3[0x17],puVar6,puVar3[0x18],puVar3[0x19]);
  }
  puVar6 = (undefined8 *)puVar3[0x12];
  puVar3[0x12] = 0;
  if (puVar6 != (undefined8 *)0x0) {
    (**(code **)*puVar6)(puVar6);
    puVar2 = (undefined8 *)
             (**(code **)(*(long *)puVar3[0x13] + 0x18))
                       ((long *)puVar3[0x13],puVar6,puVar3[0x14],puVar3[0x15]);
  }
  plVar7 = (long *)puVar3[10];
  puVar3[10] = 0;
  if (plVar7 == (long *)0x0) {
    return puVar2;
  }
  (**(code **)(*plVar7 + 8))(plVar7);
                    /* WARNING: Could not recover jumptable at 0x00107bfc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  puVar2 = (undefined8 *)
           (**(code **)(*(long *)puVar3[0xb] + 0x18))
                     ((long *)puVar3[0xb],plVar7,puVar3[0xc],puVar3[0xd]);
  return puVar2;
}


