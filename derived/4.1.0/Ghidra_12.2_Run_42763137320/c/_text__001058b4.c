/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::001058b4; name: FUN_.text__001058b4
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__001058b4(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_160 [24];
  long local_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  long local_128;
  AudioDeviceName local_120;
  undefined4 uStack_11f;
  undefined3 uStack_11b;
  undefined5 uStack_118;
  undefined3 local_113;
  int iStack_110;
  undefined4 uStack_10c;
  char local_108;
  
  local_120 = (AudioDeviceName)0x0;
  nn::audio::GetActiveAudioDeviceName(&local_120);
  if ((CONCAT35(uStack_11b,CONCAT41(uStack_11f,local_120)) == 0x6574536f69647541 &&
      CONCAT35(local_113,uStack_118) == 0x4f6b63614a6f6572) &&
      CONCAT17((undefined1)uStack_10c,CONCAT43(iStack_110,local_113)) == 0x74757074754f6b63) {
    lVar1 = 0;
  }
  else if (CONCAT35(uStack_11b,CONCAT41(uStack_11f,local_120)) == 0x4f76546f69647541 &&
           CONCAT53(uStack_118,uStack_11b) == 0x74757074754f7654) {
    lVar1 = 1;
  }
  else if ((CONCAT35(uStack_11b,CONCAT41(uStack_11f,local_120)) == 0x6273556f69647541 &&
           CONCAT35(local_113,uStack_118) == 0x754f656369766544) && iStack_110 == 0x74757074) {
    lVar1 = 2;
  }
  else {
    if (((CONCAT35(uStack_11b,CONCAT41(uStack_11f,local_120)) != 0x6975426f69647541 ||
         CONCAT35(local_113,uStack_118) != 0x616570536e49746c) ||
        CONCAT44(uStack_10c,iStack_110) != 0x757074754f72656b) || local_108 != 't')
    goto LAB__text__001059d4;
    lVar1 = 3;
  }
  uVar2 = *_DAT_0089f598;
  local_140 = 0xaf08aa39be62c456;
  uStack_138 = 0x70d999;
  local_130 = 0xd;
  local_128 = 0;
  FUN__text__005e927c(auStack_160,lVar1 * 0x18 + 0x8676a8);
  FUN__text__003ef580(uVar2,&local_140,auStack_160);
  if (local_148 != 0) {
    (**(code **)(*(long *)(local_148 + 0x48) + 0x18))();
  }
  if (local_128 != 0) {
    (**(code **)(*(long *)(local_128 + 0x48) + 0x18))();
    FUN__text__005f54f0(0);
    return;
  }
LAB__text__001059d4:
  FUN__text__005f54f0(0);
  return;
}


