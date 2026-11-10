/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00109600; name: FUN_.text__00109600
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN__text__00109600(undefined8 param_1,long *param_2)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  code *pcVar5;
  ulong uVar6;
  
  uVar6 = tpidr_el0;
  uVar6 = uVar6 & 0xffffffffffffe000;
  if (*(long *)(uVar6 + 0x98) == 0x10) {
                    /* WARNING: Subroutine does not return */
    FUN__text__00102c10();
  }
  *(long **)(uVar6 + 0x18 + *(long *)(uVar6 + 0x98) * 8) = param_2;
  *(long *)(uVar6 + 0x98) = *(long *)(uVar6 + 0x98) + 1;
  puVar1 = (undefined8 *)(**(code **)(*param_2 + 0x10))(param_2,0x170,0x10);
  if (puVar1 != (undefined8 *)0x0) {
    memset(puVar1,0,0x170);
    *(undefined4 *)(puVar1 + 6) = 0;
    puVar1[2] = 0;
    puVar1[3] = 0;
    puVar1[4] = 0;
    puVar1[5] = 0;
    *puVar1 = 0x8677a8;
    if (uVar6 == 0) {
      uVar4 = 0;
    }
    else {
      uVar4 = 0;
      if (*(long *)(uVar6 + 0x98) != 0) {
        uVar4 = *(undefined8 *)(uVar6 + 0x18 + *(long *)(uVar6 + 0x98) * 8 + -8);
      }
    }
    *_DAT_0089f720 = 1;
    puVar1[0x1c] = 0;
    puVar1[0x1d] = 0;
    puVar1[0x1e] = 0;
    puVar1[0x1f] = 0;
    puVar1[0xf] = 0;
    puVar1[0xb] = 0;
    puVar1[0xc] = 0;
    puVar1[0xd] = 0;
    puVar1[0xe] = 0;
    *puVar1 = 0x867a38;
    puVar1[1] = uVar4;
    puVar1[9] = 0x867a68;
    puVar1[10] = 0x867938;
    FUN__text__00155348(puVar1 + 0x2c);
    puVar1[1] = param_2;
    puVar1[2] = puVar1;
    puVar1[3] = 0x170;
    puVar1[4] = 0x10;
    *(long *)(uVar6 + 0x98) = *(long *)(uVar6 + 0x98) + -1;
    return puVar1;
  }
  lVar2 = (**(code **)(*param_2 + 0xb8))(param_2);
  *(long *)(lVar2 + 0x50) = _DAT_0089f718 + 0x10;
  if (*(long *)(lVar2 + 0x58) == 0) {
    *(undefined8 *)(lVar2 + 0x58) = 0;
    pcVar5 = *(code **)(lVar2 + 0xe8);
  }
  else {
    FUN__text__005d9290();
    lVar3 = *(long *)(lVar2 + 0x58);
    *(undefined8 *)(lVar2 + 0x58) = 0;
    if (lVar3 != 0) {
      (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))();
    }
    pcVar5 = *(code **)(lVar2 + 0xe8);
  }
  if (pcVar5 != (code *)0x0) {
    *(undefined8 *)(lVar2 + 0xf0) = 0;
    *(undefined8 *)(lVar2 + 0xf8) = 0;
    *(undefined8 *)(lVar2 + 0xe0) = 0;
    *(undefined8 *)(lVar2 + 0xe8) = 0;
    (*pcVar5)(lVar2 + 0x100);
  }
  pcVar5 = *(code **)(lVar2 + 0x68);
  if (pcVar5 != (code *)0x0) {
    *(undefined8 *)(lVar2 + 0x70) = 0;
    *(undefined8 *)(lVar2 + 0x78) = 0;
    *(undefined8 *)(lVar2 + 0x60) = 0;
    *(undefined8 *)(lVar2 + 0x68) = 0;
    (*pcVar5)(lVar2 + 0x80);
  }
  puVar1 = (undefined8 *)0x0;
  if (*(long *)(lVar2 + 0x58) != 0) {
    puVar1 = (undefined8 *)(**(code **)(*(long *)(*(long *)(lVar2 + 0x58) + 0x48) + 0x18))();
    *(undefined8 *)(lVar2 + 0x58) = 0;
  }
  return puVar1;
}


