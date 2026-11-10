/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_00305D1C
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00405d1c; name: FUN_.text__00405d1c
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN__text__00405d1c(void) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  uint uVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 uVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int iVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 *puVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  puVar4 = (undefined8 *)FUN__text__00400f80(0x10,0x110); // [自动静态注释] 调用尚未恢复正式名称的函数
  if (puVar4 == (undefined8 *)0x0) { // [自动静态注释] 条件判断/分支
    DAT_00ae9650 = puVar4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    return 0x34; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
  *puVar4 = 0x886ee0;
  uVar2 = nn::audio::GetActiveAudioDeviceChannelCountForOutput(); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(undefined4 *)(puVar4 + 0x21) = uVar2;
  *(undefined1 *)((long)puVar4 + 0x10c) = 0;
  nn::audio::GetActiveAudioDeviceName((AudioDeviceName *)(puVar4 + 1)); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uVar1 = *(uint *)(_DAT_008a45b0 + 0x30) >> 8 & 0xf; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if ((3 < uVar1 || (*(uint *)(_DAT_008a45b0 + 0x30) & 0xff) == 0 && uVar1 != 3) && // [自动静态注释] 条件判断/分支
     (DAT_00ae9797 != '\0')) { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    if (DAT_00ae9688 == '\0') { // [自动静态注释] 条件判断/分支
      iVar3 = nn::audio::AcquireAudioDeviceNotificationForOutput((SystemEvent *)&DAT_00ae9658); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      if (iVar3 == 0) { // [自动静态注释] 条件判断/分支
        DAT_00ae9688 = '\x01'; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      } // [自动静态注释] 作用域/控制流边界
      else if (DAT_00ae9688 == '\0') { // [自动静态注释] 条件判断/分支
        DAT_00ae9650 = puVar4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        return 1; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
      } // [自动静态注释] 作用域/控制流边界
    } // [自动静态注释] 作用域/控制流边界
    *(undefined1 *)((long)puVar4 + 0x10c) = 1;
  } // [自动静态注释] 作用域/控制流边界
  DAT_00ae9650 = puVar4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  return 1; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


