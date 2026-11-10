/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_00462418
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00562418; name: FUN_.text__00562418
 */


undefined8 FUN__text__00562418(long param_1,undefined4 param_2) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  undefined8 uVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 uVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  if (*(char *)(param_1 + 0x118) != '\0') { // [自动静态注释] 条件判断/分支
    uVar1 = FUN__text__005557f0(param_1 + 0x18,*(undefined8 *)(param_1 + 0x10), // [自动静态注释] 调用尚未恢复正式名称的函数
                                *(undefined1 *)(param_1 + 0x1a0),*(undefined4 *)(param_1 + 0x1a8),
                                *(undefined4 *)(param_1 + 0x144),param_2);
    if ((int)uVar1 != 1) { // [自动静态注释] 条件判断/分支
      return uVar1; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
    } // [自动静态注释] 作用域/控制流边界
    if ((*(int *)(param_1 + 0x100) != 0) && (*(char *)(param_1 + 0x1a0) != '\0')) { // [自动静态注释] 条件判断/分支
      uVar1 = FUN__text__0055d3a4(param_1 + 0xb8,*(undefined8 *)(param_1 + 0x10), // [自动静态注释] 调用尚未恢复正式名称的函数
                                  *(char *)(param_1 + 0x1a0),1);
      if ((int)uVar1 != 1) { // [自动静态注释] 条件判断/分支
        return uVar1; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
      } // [自动静态注释] 作用域/控制流边界
      uVar2 = NEON_ucvtf(*(undefined4 *)(param_1 + 0x1a8)); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      FUN__text__0055d850(uVar2,*(undefined4 *)(param_1 + 0x108),*(undefined4 *)(param_1 + 0x104), // [自动静态注释] 调用尚未恢复正式名称的函数
                          *(undefined4 *)(param_1 + 0x10c),param_1 + 200,
                          *(int *)(param_1 + 0x100) + -1);
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
  if (*(char *)(param_1 + 0x134) != '\0') { // [自动静态注释] 条件判断/分支
    uVar1 = FUN__text__005557f0(param_1 + 0x68,*(undefined8 *)(param_1 + 0x10), // [自动静态注释] 调用尚未恢复正式名称的函数
                                *(undefined1 *)(param_1 + 0x1a0),*(undefined4 *)(param_1 + 0x1a8),
                                *(undefined4 *)(param_1 + 0x144),param_2);
    if ((int)uVar1 != 1) { // [自动静态注释] 条件判断/分支
      return uVar1; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
    } // [自动静态注释] 作用域/控制流边界
    if ((*(int *)(param_1 + 0x11c) != 0) && (*(char *)(param_1 + 0x1a0) != '\0')) { // [自动静态注释] 条件判断/分支
      uVar1 = FUN__text__0055d3a4(param_1 + 0xd8,*(undefined8 *)(param_1 + 0x10), // [自动静态注释] 调用尚未恢复正式名称的函数
                                  *(char *)(param_1 + 0x1a0),1);
      if ((int)uVar1 != 1) { // [自动静态注释] 条件判断/分支
        return uVar1; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
      } // [自动静态注释] 作用域/控制流边界
      uVar2 = NEON_ucvtf(*(undefined4 *)(param_1 + 0x1a8)); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      FUN__text__0055d850(uVar2,*(undefined4 *)(param_1 + 0x124),*(undefined4 *)(param_1 + 0x120), // [自动静态注释] 调用尚未恢复正式名称的函数
                          *(undefined4 *)(param_1 + 0x128),param_1 + 0xe8,
                          *(int *)(param_1 + 0x11c) + -1);
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
  return 1; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


