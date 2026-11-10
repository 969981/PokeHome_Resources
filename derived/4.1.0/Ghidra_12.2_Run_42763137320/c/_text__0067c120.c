/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0067c120; name: FUN_.text__0067c120
 */


ulong FUN__text__0067c120(long param_1)

{
  ulong uVar1;
  long lVar2;
  undefined8 local_28;
  
  local_28 = 0;
  do {
    uVar1 = FUN__text__0067b2b4(param_1,&local_28,0);
    if ((long)uVar1 < 1) {
LAB__text__0067c1b4:
      return uVar1 & 0xffffffff;
    }
    lVar2 = (**(code **)(param_1 + 0x7d8))
                      (param_1,local_28,uVar1,0,*(undefined8 *)(param_1 + 0x8b8));
    if (lVar2 < 0) {
      if (lVar2 == -0x1f8) {
        lVar2 = *(long *)(*(long *)(param_1 + 0x160) + 0x18) - uVar1;
        uVar1 = 0;
        *(long *)(*(long *)(param_1 + 0x160) + 0x18) = lVar2;
      }
      else {
        uVar1 = 0xfffffc7a;
      }
      goto LAB__text__0067c1b4;
    }
    *(ulong *)(*(long *)(param_1 + 0x160) + 0x18) =
         *(long *)(*(long *)(param_1 + 0x160) + 0x18) + (lVar2 - uVar1);
  } while( true );
}


