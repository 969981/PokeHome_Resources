/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005ae1a0; name: FUN_.text__005ae1a0
 */


int * FUN__text__005ae1a0(int *param_1,int *param_2,long param_3)

{
  int *piVar1;
  undefined8 *puVar2;
  int iVar3;
  ulong uVar4;
  int *piVar5;
  ulong uVar6;
  
  if (param_1 == param_2) {
    return param_2;
  }
  while (iVar3 = *param_1, *param_1 = iVar3 + 1, iVar3 + 1 != 2) {
    param_1 = param_1 + 4;
    if (param_1 == param_2) {
      return param_2;
    }
  }
  puVar2 = *(undefined8 **)(param_3 + 0xb8);
  uVar6 = tpidr_el0;
  if (puVar2 == *(undefined8 **)(param_3 + 0xc0)) {
    FUN__text__005ae350(param_3 + 0xb0);
  }
  else {
    uVar4 = uVar6 & 0xffffffffffffe000;
    if (*(long *)(uVar4 + 0x98) == 0x10) {
LAB__text__005ae340:
                    /* WARNING: Subroutine does not return */
      FUN__text__00102c10();
    }
    *(undefined8 *)(uVar4 + *(long *)(uVar4 + 0x98) * 8 + 0x18) = *(undefined8 *)(param_3 + 200);
    *(long *)(uVar4 + 0x98) = *(long *)(uVar4 + 0x98) + 1;
    *puVar2 = *(undefined8 *)(param_1 + 2);
    *(long *)(uVar4 + 0x98) = *(long *)(uVar4 + 0x98) + -1;
    *(undefined8 **)(param_3 + 0xb8) = puVar2 + 1;
  }
  if (param_1 == param_2) {
    return param_2;
  }
  if (param_1 + 4 == param_2) {
    return param_1;
  }
  piVar5 = param_1 + 6;
  uVar6 = uVar6 & 0xffffffffffffe000;
  do {
    iVar3 = piVar5[-2] + 1;
    piVar5[-2] = iVar3;
    if (iVar3 == 2) {
      puVar2 = *(undefined8 **)(param_3 + 0xb8);
      if (puVar2 == *(undefined8 **)(param_3 + 0xc0)) {
        FUN__text__005ae350(param_3 + 0xb0,piVar5);
      }
      else {
        if (*(long *)(uVar6 + 0x98) == 0x10) goto LAB__text__005ae340;
        *(undefined8 *)(uVar6 + *(long *)(uVar6 + 0x98) * 8 + 0x18) = *(undefined8 *)(param_3 + 200)
        ;
        *(long *)(uVar6 + 0x98) = *(long *)(uVar6 + 0x98) + 1;
        *puVar2 = *(undefined8 *)piVar5;
        *(long *)(uVar6 + 0x98) = *(long *)(uVar6 + 0x98) + -1;
        *(undefined8 **)(param_3 + 0xb8) = puVar2 + 1;
      }
    }
    else {
      *param_1 = iVar3;
      *(undefined8 *)(param_1 + 2) = *(undefined8 *)piVar5;
      param_1 = param_1 + 4;
    }
    piVar1 = piVar5 + 2;
    piVar5 = piVar5 + 4;
    if (piVar1 == param_2) {
      return param_1;
    }
  } while( true );
}


