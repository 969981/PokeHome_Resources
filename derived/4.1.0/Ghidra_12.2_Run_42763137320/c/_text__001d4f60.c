/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::001d4f60; name: FUN_.text__001d4f60
 */


void FUN__text__001d4f60(long *param_1,long *param_2,long *param_3,long *param_4,undefined4 param_5,
                        undefined8 param_6,undefined8 param_7,undefined1 *param_8,byte param_9)

{
  int iVar1;
  long lVar2;
  long lVar3;
  short *psVar4;
  int iVar5;
  long local_80;
  long local_78;
  long local_70;
  long local_68;
  
  iVar1 = FUN__text__00192b70(param_7);
  if (iVar1 != 0) {
    iVar5 = 0;
    do {
      if ((param_9 & 1) == 0) {
        psVar4 = (short *)FUN__text__00320970(param_8,iVar5);
        lVar2 = FUN__text__00192c60(param_7,iVar5);
      }
      else {
        psVar4 = (short *)0x0;
        lVar2 = FUN__text__00192c60(param_7,iVar5);
      }
      if (lVar2 != 0) {
        lVar3 = *(long *)(lVar2 + 0x20);
        if (lVar3 != 0) {
          (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
        }
        if ((psVar4 == (short *)0x0) || (*psVar4 == 0)) {
          local_68 = *param_1;
          if (local_68 != 0) {
            (**(code **)(*(long *)(local_68 + 0x48) + 0x10))();
          }
          local_70 = *param_2;
          if (local_70 != 0) {
            (**(code **)(*(long *)(local_70 + 0x48) + 0x10))();
          }
          local_78 = *param_3;
          if (local_78 != 0) {
            (**(code **)(*(long *)(local_78 + 0x48) + 0x10))();
          }
          local_80 = *param_4;
          if (local_80 != 0) {
            (**(code **)(*(long *)(local_80 + 0x48) + 0x10))();
          }
          FUN__text__001acdd8(&local_68,&local_70,&local_78,&local_80,param_6,0,iVar5 + 1,param_5);
          if (local_80 != 0) {
            (**(code **)(*(long *)(local_80 + 0x48) + 0x18))();
            local_80 = 0;
          }
          if (local_78 != 0) {
            (**(code **)(*(long *)(local_78 + 0x48) + 0x18))();
            local_78 = 0;
          }
          if (local_70 != 0) {
            (**(code **)(*(long *)(local_70 + 0x48) + 0x18))();
            local_70 = 0;
          }
          if (local_68 != 0) {
            (**(code **)(*(long *)(local_68 + 0x48) + 0x18))();
            local_68 = 0;
          }
          psVar4 = (short *)FUN__text__005f3244(*param_1);
        }
        FUN__text__005f32c4(lVar3,psVar4);
        *(undefined1 *)(lVar2 + 0x28) = *param_8;
        (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))((long *)(lVar3 + 0x48));
      }
      iVar5 = iVar5 + 1;
    } while (iVar1 != iVar5);
  }
  return;
}


