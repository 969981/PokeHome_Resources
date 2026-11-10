/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004590f0; name: FUN_.text__004590f0
 */


void FUN__text__004590f0(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long local_40;
  long lStack_38;
  
  lVar4 = *(long *)(param_1 + 0x20);
joined_r0x0045910c:
  do {
    if (lVar4 == 0) {
LAB__text__004591b0:
      *(undefined4 *)(param_1 + 0x28) = 0;
      return;
    }
    lVar3 = *(long *)(*(long *)(lVar4 + 0x150) + 0x30);
    if (lVar3 != 0) {
      lVar1 = FUN__text__0045c1e4(lVar3);
      if (lVar1 == param_1) {
        lVar1 = 0;
      }
      else {
        do {
          lVar1 = lVar3;
          lVar3 = *(long *)(lVar1 + 0x20);
          if (lVar3 == 0) {
            lVar4 = *(long *)(param_1 + 0x20);
            if (lVar4 != 0) goto LAB__text__0045911c;
            goto LAB__text__004591b0;
          }
          lVar2 = FUN__text__0045c1e4(lVar3);
        } while (lVar2 != param_1);
      }
      local_40 = lVar3;
      lStack_38 = lVar1;
      FUN__text__00458f70(*(undefined8 *)(lVar4 + 0x150),&local_40);
      lVar4 = *(long *)(param_1 + 0x20);
      goto joined_r0x0045910c;
    }
LAB__text__0045911c:
    if (*(long *)(lVar4 + 0x18) == 0) {
      *(undefined8 *)(param_1 + 0x18) = 0;
      *(undefined8 *)(param_1 + 0x20) = 0;
      *(undefined8 *)(lVar4 + 0x18) = 0;
      lVar4 = *(long *)(param_1 + 0x20);
    }
    else {
      *(long *)(param_1 + 0x20) = *(long *)(lVar4 + 0x18);
      *(undefined8 *)(lVar4 + 0x18) = 0;
      lVar4 = *(long *)(param_1 + 0x20);
    }
  } while( true );
}


