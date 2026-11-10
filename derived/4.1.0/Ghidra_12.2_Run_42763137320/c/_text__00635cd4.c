/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00635cd4; name: FUN_.text__00635cd4
 */


bool FUN__text__00635cd4(long param_1)

{
  ulong uVar1;
  undefined8 local_30;
  undefined8 local_28;
  
  local_30 = 0;
  local_28 = 0;
  uVar1 = FUN__text__0060f6e0(*(undefined8 *)(param_1 + 0x2f0),6);
  if ((uVar1 & 1) == 0) {
    if (local_30._1_1_ != '\0') {
      return true;
    }
  }
  else {
    FUN__text__0061b3d0(*(undefined8 *)(param_1 + 0x2f0),&local_30);
    if ((char)local_30 != '\0' || local_30._1_1_ != '\0') {
      return true;
    }
  }
  return ((((local_30._2_1_ != '\0' || local_30._3_1_ != '\0') ||
           (local_30._4_1_ != '\0' || local_30._5_1_ != '\0')) ||
          ((local_30._6_1_ != '\0' || local_30._7_1_ != '\0') || (char)local_28 != '\0')) ||
         (((local_28._1_1_ != '\0' || local_28._2_1_ != '\0') || local_28._3_1_ != '\0') ||
         local_28._4_1_ != '\0')) ||
         ((local_28._5_1_ != '\0' || local_28._6_1_ != '\0') || local_28._7_1_ != '\0');
}


