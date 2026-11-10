/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005c5000; name: FUN_.text__005c5000
 */


void FUN__text__005c5000(long param_1,ulong param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long *plVar6;
  
  param_2 = param_2 & 0xffffffff;
  lVar1 = FUN__text__006f45d8(param_3);
  if (lVar1 == 0) {
    uVar5 = 0;
    lVar1 = 0;
    lVar3 = *(long *)(param_1 + 0x8a8) + param_2 * 0x28 + 0xd8;
  }
  else {
    plVar6 = *(long **)(param_1 + 0x10);
    lVar2 = (**(code **)(*plVar6 + 0x10))(plVar6,lVar1,8);
    lVar3 = *(long *)(param_1 + 0x8a8) + param_2 * 0x20;
    lVar4 = *(long *)(lVar3 + 0x58);
    *(long *)(lVar3 + 0x58) = lVar2;
    if (lVar4 != 0) {
      (**(code **)(**(long **)(lVar3 + 0x60) + 0x18))
                (*(long **)(lVar3 + 0x60),lVar4,*(undefined8 *)(lVar3 + 0x68),
                 *(undefined8 *)(lVar3 + 0x70));
    }
    *(long **)(lVar3 + 0x60) = plVar6;
    *(long *)(lVar3 + 0x68) = lVar1;
    *(undefined8 *)(lVar3 + 0x70) = 8;
    lVar2 = *(long *)(param_1 + 0x8a8) + 0x58;
    lVar3 = lVar2 + param_2 * 0x28 + 0x80;
    uVar5 = *(undefined8 *)(lVar2 + param_2 * 0x20);
  }
  FUN__text__006f45f8(lVar3,uVar5,lVar1);
  FUN__text__006f4610(*(long *)(param_1 + 0x8a8) + param_2 * 0x28 + 0xd8,&DAT_00b0d830,param_3);
  return;
}


