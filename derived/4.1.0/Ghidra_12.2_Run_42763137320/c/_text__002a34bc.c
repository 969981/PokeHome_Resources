/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::002a34bc; name: FUN_.text__002a34bc
 */


uint FUN__text__002a34bc(long param_1,long *param_2,undefined8 param_3,uint param_4,uint param_5)

{
  long lVar1;
  uint uVar2;
  long lVar3;
  long *plVar4;
  long local_68;
  long local_60;
  undefined8 local_58;
  
  local_58 = param_3;
  FUN__text__002a32ac(&local_60,param_3,&local_58);
  FUN__text__002a33c8(&local_68,local_58,&local_60);
  lVar3 = *param_2;
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
  }
  lVar1 = local_68;
  if (local_68 == 0) {
LAB__text__002a3578:
    FUN__text__005fc3e8(*(undefined8 *)(lVar1 + 0x58),
                        param_1 + (ulong)param_4 * 0x2850 + (ulong)param_5 * 0x158 + 0x54);
  }
  else {
    plVar4 = (long *)(local_68 + 0x48);
    (**(code **)(*plVar4 + 0x10))(plVar4);
    (**(code **)(*plVar4 + 0x10))(plVar4);
    (**(code **)(*plVar4 + 0x10))(plVar4);
    if ((param_4 < 0x28) && (param_5 < 0x1e)) goto LAB__text__002a3578;
  }
  plVar4 = (long *)(lVar1 + 0x48);
  (**(code **)(*plVar4 + 0x18))(plVar4);
  uVar2 = FUN__text__00306588(lVar1);
  (**(code **)(*plVar4 + 0x18))(plVar4);
  if ((uVar2 & 1) == 0) {
    (**(code **)(*plVar4 + 0x18))(plVar4);
    if (lVar3 == 0) goto LAB__text__002a360c;
  }
  else {
    FUN__text__005fc2e8(param_1 + (ulong)param_4 * 0x2850 + (ulong)param_5 * 0x158 + 0x54,
                        *(undefined8 *)(lVar3 + 0x58));
    (**(code **)(*plVar4 + 0x18))(plVar4);
  }
  (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))((long *)(lVar3 + 0x48));
LAB__text__002a360c:
  if (local_68 != 0) {
    (**(code **)(*(long *)(local_68 + 0x48) + 0x18))();
  }
  if (local_60 != 0) {
    (**(code **)(*(long *)(local_60 + 0x48) + 0x18))();
  }
  return uVar2 & 1;
}


