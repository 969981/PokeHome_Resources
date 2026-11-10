/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0025f0e0; name: FUN_.text__0025f0e0
 */


void FUN__text__0025f0e0(long *param_1)

{
  long lVar1;
  long lVar2;
  undefined4 local_34;
  undefined4 local_18;
  undefined4 uStack_14;
  
  lVar2 = *param_1;
  if (*(code **)(lVar2 + 0x7a0) != (code *)0x0) {
    uStack_14 = (undefined4)param_1[1];
    local_34 = *(undefined4 *)((long)param_1 + 0xc);
    lVar1 = lVar2 + 0x7c0;
    local_18 = 0;
    (**(code **)(lVar2 + 0x7a0))(lVar1,&uStack_14,&local_18,&local_34);
    uStack_14 = (undefined4)param_1[1];
    local_34 = (undefined4)param_1[2];
    local_18 = 1;
    (**(code **)(lVar2 + 0x7a0))(lVar1,&uStack_14,&local_18,&local_34);
    uStack_14 = (undefined4)param_1[1];
    local_34 = *(undefined4 *)((long)param_1 + 0x14);
    local_18 = 2;
    (**(code **)(lVar2 + 0x7a0))(lVar1,&uStack_14,&local_18,&local_34);
    uStack_14 = (undefined4)param_1[1];
    local_34 = (undefined4)param_1[3];
    local_18 = 3;
    (**(code **)(lVar2 + 0x7a0))(lVar1,&uStack_14,&local_18,&local_34);
    uStack_14 = (undefined4)param_1[1];
    local_34 = *(undefined4 *)((long)param_1 + 0x1c);
    local_18 = 4;
    (**(code **)(lVar2 + 0x7a0))(lVar1,&uStack_14,&local_18,&local_34);
    uStack_14 = (undefined4)param_1[1];
    local_34 = (undefined4)param_1[4];
    local_18 = 5;
    (**(code **)(lVar2 + 0x7a0))(lVar1,&uStack_14,&local_18,&local_34);
  }
  FUN__text__00128ec0(lVar2,0);
  if (*(long *)(lVar2 + 0x4e0) != 0) {
    FUN__text__003c02e4();
  }
  return;
}


