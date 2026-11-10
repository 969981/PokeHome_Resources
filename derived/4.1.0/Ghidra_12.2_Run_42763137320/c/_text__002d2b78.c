/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::002d2b78; name: FUN_.text__002d2b78
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN__text__002d2b78(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  int iVar4;
  long *plVar5;
  long local_2b8;
  undefined8 uStack_2b0;
  undefined8 local_2a8;
  long local_2a0 [72];
  
  FUN__text__001580bc(local_2a0,0x87b2f8);
  puVar1 = _DAT_0089f550;
  FUN__text__00113bb0(&local_2b8,*_DAT_0089f550,0,local_2a0,0,0,0);
  if (*(long *)(param_1 + 0x68) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x68) + 0x48) + 0x18))();
  }
  lVar2 = local_2b8;
  *(long *)(param_1 + 0x68) = local_2b8;
  if (local_2b8 != 0) {
    plVar5 = (long *)(local_2b8 + 0x48);
    (**(code **)(*plVar5 + 0x10))(plVar5);
    if (*(long *)(param_1 + 0x70) != 0 || *(long *)(param_1 + 0xf0) != 0) {
      FUN__text__005d9010(lVar2,param_1 + 0x60,1);
    }
    FUN__text__005d8de0(lVar2);
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))(plVar5);
  }
  if ((local_2a0[3] != 0) && (local_2a0[0] != 0)) {
    (**(code **)(*(long *)(local_2a0[0] + 0x48) + 0x18))();
  }
  local_2a0[0] = 0;
  local_2a0[1] = 0xcbf29ce484222645;
  local_2a0[2] = 0x70f683;
  local_2a0[3] = 0;
  if (local_2a0[4] != 0) {
    (**(code **)(*(long *)(local_2a0[4] + 0x48) + 0x18))();
  }
  FUN__text__001580bc(local_2a0,0x87b310);
  FUN__text__00113bb0(&local_2b8,*puVar1,0,local_2a0,0,0,0);
  if (*(long *)(param_1 + 0x178) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x178) + 0x48) + 0x18))();
  }
  lVar3 = local_2b8;
  *(long *)(param_1 + 0x178) = local_2b8;
  if (local_2b8 != 0) {
    plVar5 = (long *)(local_2b8 + 0x48);
    (**(code **)(*plVar5 + 0x10))(plVar5);
    if (*(long *)(param_1 + 0x180) != 0 || *(long *)(param_1 + 0x200) != 0) {
      FUN__text__005d9010(lVar3,param_1 + 0x170,1);
    }
    FUN__text__005d8de0(lVar3);
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))(plVar5);
  }
  if ((local_2a0[3] != 0) && (local_2a0[0] != 0)) {
    (**(code **)(*(long *)(local_2a0[0] + 0x48) + 0x18))();
  }
  local_2a0[0] = 0;
  local_2a0[1] = 0xcbf29ce484222645;
  local_2a0[2] = 0x70f683;
  local_2a0[3] = 0;
  if (local_2a0[4] != 0) {
    (**(code **)(*(long *)(local_2a0[4] + 0x48) + 0x18))();
  }
  if (lVar2 == 0 && lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl();
  }
  if ((((*(long *)(param_1 + 0x68) != 0) && (*(char *)(*(long *)(param_1 + 0x68) + 0x170) != '\0'))
      && (*(long *)(param_1 + 0x178) != 0)) &&
     (*(char *)(*(long *)(param_1 + 0x178) + 0x170) != '\0')) {
    iVar4 = FUN__text__002d3950((long *)(param_1 + 0x280));
    if (iVar4 == 0) {
      FUN__text__002d39d4(local_2a0,param_1 + 0x170,param_1 + 0x60);
      FUN__text__002d3c00(&local_2b8,local_2a0);
      *(long *)(param_1 + 0x280) = local_2b8;
      *(undefined8 *)(param_1 + 0x288) = uStack_2b0;
      *(undefined8 *)(param_1 + 0x290) = local_2a8;
      FUN__text__002d31f8(local_2a0);
    }
  }
  return 1;
}


