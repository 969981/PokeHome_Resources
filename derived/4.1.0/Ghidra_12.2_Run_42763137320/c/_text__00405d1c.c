/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00405d1c; name: FUN_.text__00405d1c
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN__text__00405d1c(void)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 *puVar4;
  
  puVar4 = (undefined8 *)FUN__text__00400f80(0x10,0x110);
  if (puVar4 == (undefined8 *)0x0) {
    DAT_00ae9650 = puVar4;
    return 0x34;
  }
  *puVar4 = 0x886ee0;
  uVar2 = nn::audio::GetActiveAudioDeviceChannelCountForOutput();
  *(undefined4 *)(puVar4 + 0x21) = uVar2;
  *(undefined1 *)((long)puVar4 + 0x10c) = 0;
  nn::audio::GetActiveAudioDeviceName((AudioDeviceName *)(puVar4 + 1));
  uVar1 = *(uint *)(_DAT_008a45b0 + 0x30) >> 8 & 0xf;
  if ((3 < uVar1 || (*(uint *)(_DAT_008a45b0 + 0x30) & 0xff) == 0 && uVar1 != 3) &&
     (DAT_00ae9797 != '\0')) {
    if (DAT_00ae9688 == '\0') {
      iVar3 = nn::audio::AcquireAudioDeviceNotificationForOutput((SystemEvent *)&DAT_00ae9658);
      if (iVar3 == 0) {
        DAT_00ae9688 = '\x01';
      }
      else if (DAT_00ae9688 == '\0') {
        DAT_00ae9650 = puVar4;
        return 1;
      }
    }
    *(undefined1 *)((long)puVar4 + 0x10c) = 1;
  }
  DAT_00ae9650 = puVar4;
  return 1;
}


