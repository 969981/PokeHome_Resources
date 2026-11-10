/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0014b670; name: FUN_.text__0014b670
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__0014b670(long param_1,undefined8 param_2)

{
  undefined4 uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined4 local_450;
  undefined4 uStack_44c;
  undefined1 auStack_250 [520];
  undefined8 local_48;
  
  if (*(char *)(param_1 + 0xd0) != '\0') {
    lVar5 = *(long *)(*_DAT_0089f4f0 + 0x78);
    local_48 = param_2;
    if (lVar5 != 0) {
      (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))();
    }
    FUN__text__00145f44(&local_450,lVar5);
    FUN__text__0014953c(auStack_250,CONCAT44(uStack_44c,local_450));
    if (CONCAT44(uStack_44c,local_450) != 0) {
      (**(code **)(*(long *)(CONCAT44(uStack_44c,local_450) + 0x48) + 0x18))();
    }
    if (*(long *)(param_1 + 0x68) != 0) {
      FUN__text__0014953c(&local_450);
      FUN__text__0014d25c(auStack_250,&local_450);
      FUN__text__0014821c(&local_450);
    }
    lVar2 = FUN__text__0014d530(&local_450,param_2,0x715bd3);
    if (lVar2 != 0) {
      (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))();
    }
    if (*(long *)(param_1 + 0x1d0) != 0) {
      (**(code **)(*(long *)(*(long *)(param_1 + 0x1d0) + 0x48) + 0x18))();
    }
    *(long *)(param_1 + 0x1d0) = lVar2;
    lVar6 = *(long *)(*(long *)(param_1 + 0xf0) + 0xb0);
    if (lVar6 != 0) {
      (**(code **)(*(long *)(lVar6 + 0x48) + 0x10))();
    }
    if (*(long *)(lVar2 + 0xb0) != 0) {
      (**(code **)(*(long *)(*(long *)(lVar2 + 0xb0) + 0x48) + 0x18))();
    }
    *(long *)(lVar2 + 0xb0) = lVar6;
    lVar2 = *(long *)(param_1 + 0x1d0);
    lVar6 = *(long *)(*(long *)(param_1 + 0xf0) + 0x130);
    if (lVar6 != 0) {
      (**(code **)(*(long *)(lVar6 + 0x48) + 0x10))();
    }
    lVar3 = *(long *)(lVar2 + 0x130);
    if (lVar3 != 0) {
      (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))();
    }
    *(long *)(lVar2 + 0x130) = lVar6;
    FUN__text__005c5e00(*(undefined8 *)(param_1 + 0x60),*(undefined8 *)(param_1 + 0x1d0));
    *(undefined1 *)(*(long *)(param_1 + 0x1d0) + 0xb8) = 1;
    *(undefined1 *)(*(long *)(param_1 + 0x1d0) + 0x1ac) = 1;
    FUN__text__0014ce28(&local_450,param_2,&local_48);
    if (*(long *)(param_1 + 0x1d8) != 0) {
      (**(code **)(*(long *)(*(long *)(param_1 + 0x1d8) + 0x48) + 0x18))();
    }
    *(long *)(param_1 + 0x1d8) = CONCAT44(uStack_44c,local_450);
    uVar1 = FUN__text__005bfe00(*(undefined8 *)(CONCAT44(uStack_44c,local_450) + 0xb0),auStack_250);
    lVar2 = *(long *)(param_1 + 0x1d8);
    *(undefined4 *)(param_1 + 0x1e0) = uVar1;
    uVar4 = FUN__text__00145fcc(lVar5);
    local_450 = 1;
    uVar1 = FUN__text__005bd8c0(*(undefined8 *)(lVar2 + 0xb0),uVar4,&local_450);
    *(undefined4 *)(param_1 + 0x1e8) = uVar1;
    (**(code **)(**(long **)(param_1 + 0x1d0) + 0x78))
              (*(long **)(param_1 + 0x1d0),*(undefined8 *)(param_1 + 0x1d8));
    FUN__text__0014821c(auStack_250);
    (**(code **)(*(long *)(lVar5 + 0x48) + 0x18))((long *)(lVar5 + 0x48));
  }
  return;
}


