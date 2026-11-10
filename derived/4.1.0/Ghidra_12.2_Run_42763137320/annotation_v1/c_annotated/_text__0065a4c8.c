/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_0055A4C8
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0065a4c8; name: FUN_.text__0065a4c8
 */


void FUN__text__0065a4c8(long param_1) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  int iVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  if ((*(long *)(param_1 + 0xd8) != 0) && // [自动静态注释] 条件判断/分支
     ((*(long *)(param_1 + 0x1290) != 0 || (*(int *)(param_1 + 0x1298) != 0)))) { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    iVar1 = FUN__text__0066c120(*(undefined8 *)(*(long *)(param_1 + 0xd8) + 0xb0),param_1 + 0x12a0); // [自动静态注释] 调用尚未恢复正式名称的函数
    if (iVar1 != 0) { // [自动静态注释] 条件判断/分支
      FUN__text__00666f74(param_1,0x719833,iVar1); // [自动静态注释] 调用尚未恢复正式名称的函数
    } // [自动静态注释] 作用域/控制流边界
    if (*(long *)(param_1 + 0x12f0) != 0) { // [自动静态注释] 条件判断/分支
      do { // [自动静态注释] 循环/迭代
        FUN__text__00656b90(param_1 + 0x12d8,*(undefined8 *)(param_1 + 0x12e0),0); // [自动静态注释] 调用尚未恢复正式名称的函数
      } while (*(long *)(param_1 + 0x12f0) != 0); // [自动静态注释] 循环/迭代
    } // [自动静态注释] 作用域/控制流边界
    *(undefined8 *)(param_1 + 0x1290) = 0;
    *(undefined4 *)(param_1 + 0x1298) = 0;
  } // [自动静态注释] 作用域/控制流边界
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


