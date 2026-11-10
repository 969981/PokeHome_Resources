/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::001c74d8; name: FUN_.text__001c74d8
 */


void FUN__text__001c74d8(long param_1,uint *param_2)

{
  undefined8 uVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  long local_a0;
  long local_98;
  long local_90;
  long local_88;
  long local_80;
  long lStack_78;
  long local_70;
  long lStack_68;
  
  *(undefined8 *)(param_1 + 0x30) = 0x6df05e71f002a220;
  *(undefined8 *)(param_1 + 0x28) = 0xe3089e4e9ae401d5;
  *(undefined8 *)(param_1 + 0x48) = 0x6b55eb86d83e97af;
  *(undefined8 *)(param_1 + 0x40) = 0xddf25ea81eb715f2;
  *(undefined8 *)(param_1 + 0x38) = 0x809b4765f1f7e40b;
  *(undefined8 *)(param_1 + 0x60) = 0x805244e65a807ec7;
  *(undefined8 *)(param_1 + 0x68) = 0xc39ea5cb62837236;
  *(undefined8 *)(param_1 + 0x50) = 0x1cef31bf59a876b4;
  *(undefined8 *)(param_1 + 0x58) = 0x73894700cb53cbdc;
  uVar1 = FUN__text__001281d4(*(undefined8 *)(param_1 + 8));
  FUN__text__001156d0(&local_80,uVar1,0);
  lVar4 = *(long *)(local_80 + 0x60);
  if (lVar4 == 0) {
    plVar2 = (long *)(local_80 + 0x48);
    lVar4 = *plVar2;
LAB__text__001c77f8:
    (**(code **)(lVar4 + 0x18))(plVar2);
    return;
  }
  (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
  if ((local_80 != 0) && ((**(code **)(*(long *)(local_80 + 0x48) + 0x18))(), lVar4 == 0)) {
    return;
  }
  if ((*param_2 < 2) || (*param_2 != 2)) {
    plVar2 = (long *)&DAT_00725110;
  }
  else {
    plVar2 = (long *)&DAT_00724df0;
  }
  local_80 = *plVar2;
  lStack_78 = plVar2[1];
  lVar5 = *(long *)(param_1 + 0x10);
  local_70 = plVar2[2];
  lStack_68 = plVar2[3];
  if (lVar5 != 0) {
    plVar2 = (long *)(lVar4 + 0x48);
    local_88 = lVar4;
    (**(code **)(*plVar2 + 0x10))(plVar2);
    FUN__text__001ac1fc(lVar5,(undefined8 *)(param_1 + 0x30),&local_88,&local_80);
    if (local_88 != 0) {
      (**(code **)(*(long *)(local_88 + 0x48) + 0x18))();
      local_88 = 0;
    }
    lVar5 = *(long *)(param_1 + 0x10);
    if (lVar5 != 0) {
      local_90 = lVar4;
      (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))(plVar2);
      FUN__text__001ac1fc(lVar5,(undefined8 *)(param_1 + 0x38),&local_90,&lStack_78);
      if (local_90 != 0) {
        (**(code **)(*(long *)(local_90 + 0x48) + 0x18))();
        local_90 = 0;
      }
      lVar5 = *(long *)(param_1 + 0x10);
      if (lVar5 != 0) {
        local_98 = lVar4;
        (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))(plVar2);
        FUN__text__001ac1fc(lVar5,(undefined8 *)(param_1 + 0x48),&local_98,&local_70);
        if (local_98 != 0) {
          (**(code **)(*(long *)(local_98 + 0x48) + 0x18))();
          local_98 = 0;
        }
        lVar5 = *(long *)(param_1 + 0x10);
        if (lVar5 != 0) {
          local_a0 = lVar4;
          (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))(plVar2);
          FUN__text__001ac1fc(lVar5,(undefined8 *)(param_1 + 0x60),&local_a0,&lStack_68);
          if (local_a0 != 0) {
            (**(code **)(*(long *)(local_a0 + 0x48) + 0x18))();
            local_a0 = 0;
          }
          if (*param_2 < 2) {
            lVar4 = *(long *)(*(long *)(param_1 + 8) + 0x2d0);
            if (lVar4 != 0) {
              plVar3 = (long *)(lVar4 + 0x48);
              (**(code **)(*plVar3 + 0x10))(plVar3);
              FUN__text__003c7c60(lVar4,(undefined8 *)(param_1 + 0x50),1);
              FUN__text__003c7c60(lVar4,(undefined8 *)(param_1 + 0x58),1);
              (**(code **)(*plVar3 + 0x18))(plVar3);
            }
          }
          else if (*param_2 == 2) {
            FUN__text__001c7824(param_1);
          }
          lVar4 = *plVar2;
          goto LAB__text__001c77f8;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  nn::diag::detail::AbortImpl();
}


