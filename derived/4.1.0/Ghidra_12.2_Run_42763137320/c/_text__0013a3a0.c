/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0013a3a0; name: FUN_.text__0013a3a0
 */


void FUN__text__0013a3a0(long param_1,uint param_2,ulong param_3,long *param_4,undefined8 param_5)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined8 local_38;
  undefined8 local_18;
  
  if ((param_2 < 9) && ((1 << (ulong)(param_2 & 0x1f) & 0x141U) != 0)) {
    if (param_2 < 9) {
      local_38 = *(undefined8 *)
                  (*(long *)((long)(int)param_2 * 8 + 0x869c48) + (param_3 & 0xffffffff) * 8);
      lVar2 = *param_4;
    }
    else {
      lVar2 = *param_4;
      local_38 = 0xcbf29ce484222645;
    }
    local_18 = param_5;
    if (lVar2 != 0) {
      (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))();
    }
    lVar3 = *(long *)(*(long *)(param_1 + 0x2d0) + 0x2e8);
    if (lVar3 != 0) {
      (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
    }
    FUN__text__005f2d98(lVar2,&local_18,lVar3);
    uVar1 = FUN__text__005f3244(lVar3);
    FUN__text__0012c9f0(param_1 + 0x110,&local_38,uVar1,0xb);
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))((long *)(lVar3 + 0x48));
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))((long *)(lVar2 + 0x48));
  }
  return;
}


