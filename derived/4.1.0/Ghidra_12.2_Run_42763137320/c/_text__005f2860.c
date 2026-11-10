/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005f2860; name: FUN_.text__005f2860
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__005f2860(long param_1,undefined8 param_2,long param_3,void *param_4,size_t param_5)

{
  long lVar1;
  code *pcVar2;
  long *plVar3;
  long local_160;
  long local_158;
  undefined8 local_150;
  code *local_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined1 auStack_130 [96];
  undefined8 local_d0;
  code *local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined1 auStack_b0 [96];
  long local_38;
  
  memset(&local_160,0,0x110);
  FUN__text__00113bb0(&local_38,*_DAT_0089f550,0,param_2,0,*(undefined8 *)(param_1 + 8),0);
  local_158 = local_38;
  plVar3 = (long *)(local_38 + 0x48);
  (**(code **)(*plVar3 + 0x10))(plVar3);
  FUN__text__005d8de0(local_38);
  (**(code **)(*plVar3 + 0x18))(plVar3);
  lVar1 = local_158;
  if (*(long *)(local_158 + 0x180) != 0) {
    memcpy(param_4,(void *)(*(long *)(local_158 + 400) + param_3),param_5);
  }
  local_160 = _DAT_0089f718 + 0x10;
  FUN__text__005d9290(lVar1,&local_160);
  lVar1 = local_158;
  local_158 = 0;
  if (lVar1 != 0) {
    (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))();
  }
  pcVar2 = local_c8;
  if (local_c8 != (code *)0x0) {
    local_c0 = 0;
    uStack_b8 = 0;
    local_d0 = 0;
    local_c8 = (code *)0x0;
    (*pcVar2)(auStack_b0);
  }
  pcVar2 = local_148;
  if (local_148 != (code *)0x0) {
    local_140 = 0;
    uStack_138 = 0;
    local_150 = 0;
    local_148 = (code *)0x0;
    (*pcVar2)(auStack_130);
  }
  if (local_158 != 0) {
    (**(code **)(*(long *)(local_158 + 0x48) + 0x18))();
  }
  return;
}


