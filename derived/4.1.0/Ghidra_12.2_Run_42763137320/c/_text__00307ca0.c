/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00307ca0; name: FUN_.text__00307ca0
 */


void FUN__text__00307ca0(long param_1)

{
  undefined1 uVar1;
  byte bVar2;
  undefined2 uVar3;
  uint uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  long local_28;
  
  FUN__text__003227d0(&local_28);
  uVar5 = FUN__text__003028c4(local_28,param_1 + 0x60);
  if (local_28 != 0) {
    (**(code **)(*(long *)(local_28 + 0x48) + 0x18))();
  }
  if ((uVar5 & 1) == 0) {
    uVar8 = *(undefined8 *)(param_1 + 0x60);
    lVar6 = FUN__text__00321ac0();
    lVar7 = FUN__text__00321ac0();
    *(undefined8 *)(lVar6 + *(long *)(lVar7 + 0x7b498) * 8 + 0x7b4a0) = uVar8;
    lVar6 = FUN__text__00321ac0();
    lVar7 = FUN__text__00321ac0();
    lVar7 = *(long *)(lVar7 + 0x7b498);
    lVar9 = lVar6 + lVar7 * 0x38;
    uVar8 = FUN__text__00637404(*(undefined8 *)(param_1 + 0x58));
    *(undefined8 *)(lVar9 + 0x7b7c0) = uVar8;
    uVar3 = FUN__text__006312d8(*(undefined8 *)(param_1 + 0x58));
    *(undefined2 *)(lVar9 + 0x7b7c8) = uVar3;
    uVar3 = FUN__text__00631008(*(undefined8 *)(param_1 + 0x58));
    *(undefined2 *)(lVar9 + 0x7b7ca) = uVar3;
    uVar3 = FUN__text__00631010(*(undefined8 *)(param_1 + 0x58));
    *(undefined2 *)(lVar9 + 0x7b7cc) = uVar3;
    uVar1 = FUN__text__00632408(*(undefined8 *)(param_1 + 0x58));
    *(undefined1 *)(lVar9 + 0x7b7ce) = uVar1;
    uVar3 = FUN__text__006312e0(*(undefined8 *)(param_1 + 0x58));
    *(undefined2 *)(lVar9 + 0x7b7d0) = uVar3;
    uVar1 = FUN__text__0063378c(*(undefined8 *)(param_1 + 0x58));
    *(undefined1 *)(lVar9 + 0x7b7d2) = uVar1;
    uVar1 = FUN__text__006312d0(*(undefined8 *)(param_1 + 0x58));
    *(undefined1 *)(lVar9 + 0x7b7d3) = uVar1;
    FUN__text__00633ae0(*(undefined8 *)(param_1 + 0x58),lVar9 + 0x7b7d4,0x1a);
    bVar2 = FUN__text__00634538(*(undefined8 *)(param_1 + 0x58));
    *(byte *)(lVar9 + 0x7b7ee) = bVar2 & 1;
    if (*(short *)(lVar9 + 0x7b7ca) == 0x365) {
      uVar4 = FUN__text__00631324(*(undefined8 *)(param_1 + 0x58));
      uVar4 = uVar4 & 0xff;
    }
    else {
      uVar4 = 0;
    }
    *(uint *)(lVar6 + lVar7 * 0x38 + 0x7b7f0) = uVar4;
    lVar6 = FUN__text__00321ac0();
    *(long *)(lVar6 + 0x7b498) = *(long *)(lVar6 + 0x7b498) + 1;
  }
  return;
}


