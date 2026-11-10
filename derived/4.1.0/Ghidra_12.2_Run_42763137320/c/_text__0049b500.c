/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0049b500; name: FUN_.text__0049b500
 */


undefined8 FUN__text__0049b500(long *param_1,long param_2,uint param_3,uint param_4)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  undefined8 *puVar6;
  undefined8 *puVar5;
  
  uVar1 = FUN__text__00464cf0();
  if ((uVar1 & 1) != 0) {
    if ((((param_3 & 1) == 0) || (*(long *)(param_2 + 0x18) == 0)) ||
       (*(long *)(param_2 + 0x10) == 0)) {
      uVar2 = FUN__text__00496290(param_1,param_2,param_3 & 1,param_4 & 1);
      return uVar2;
    }
    uVar1 = (**(code **)(*param_1 + 0x128))(param_1,1);
    for (plVar4 = (long *)param_1[0x25]; plVar4 != (long *)0x0; plVar4 = (long *)*plVar4) {
      lVar3 = *(long *)(param_2 + 0x18);
      if ((((((plVar4[2] == 0) || (*(long *)(lVar3 + 0x20) == plVar4[2])) &&
            ((*(int *)(plVar4 + 3) == 0 || (*(int *)(lVar3 + 0x28) == *(int *)(plVar4 + 3))))) &&
           ((*(int *)(plVar4 + 4) == 0 || (*(int *)(lVar3 + 0x30) == *(int *)(plVar4 + 4))))) &&
          ((*(char *)(plVar4 + 5) == -1 || (*(char *)(lVar3 + 0x38) == *(char *)(plVar4 + 5))))) &&
         (((*(char *)(plVar4 + 6) == -1 || (*(char *)(lVar3 + 0x40) == *(char *)(plVar4 + 6))) &&
          ((plVar4[7] == 0 || (*(long *)(lVar3 + 0x48) == plVar4[7])))))) {
        if (*(int *)(plVar4 + 0x10) != 0) {
          uVar2 = *(undefined8 *)(param_2 + 0x10);
          puVar5 = (undefined8 *)plVar4[0xf];
          do {
            puVar6 = puVar5 + 1;
            FUN__text__00496c40(*puVar5,lVar3,uVar2);
            puVar5 = puVar6;
          } while (puVar6 != (undefined8 *)(plVar4[0xf] + (ulong)*(uint *)(plVar4 + 0x10) * 8));
        }
        *(int *)(plVar4 + 0xe) = *(int *)(plVar4 + 0xe) + 1;
      }
    }
    uVar2 = FUN__text__00496290(param_1,param_2,1,param_4 & 1);
    if ((uVar1 & 1) != 0) {
      return uVar2;
    }
  }
  return 2;
}


