/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_00486420
 * 用途/行为：用途尚未确认；代码可观察到：内存复制/初始化, 有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00586420; name: FUN_.text__00586420
 */


void FUN__text__00586420(long param_1) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  uint uVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint uVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  lVar3 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  do { // [自动静态注释] 循环/迭代
    uVar2 = *(uint *)(*(long *)(param_1 + 0x18) + (long)*(int *)(param_1 + 0x3c) * 4); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar1 = uVar2 + 3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (-1 < (int)uVar2) { // [自动静态注释] 条件判断/分支
      uVar1 = uVar2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } // [自动静态注释] 作用域/控制流边界
    memcpy(*(void **)(*(long *)(param_1 + 0x28) + lVar3 * 8), // [自动静态注释] 内存复制、清零或移动
           (void *)(*(long *)(*(long *)(param_1 + 0x20) + lVar3 * 8) + (long)((int)uVar1 >> 2) * 4), // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
           (ulong)(uVar1 & 0xfffffffc)); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    lVar3 = lVar3 + 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } while (lVar3 < *(int *)(param_1 + 0x10)); // [自动静态注释] 循环/迭代
  *(undefined1 *)(param_1 + 0x48) = 1;
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


