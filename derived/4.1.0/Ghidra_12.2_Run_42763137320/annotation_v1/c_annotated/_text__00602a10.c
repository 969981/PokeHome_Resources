/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_00502A10
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00602a10; name: FUN_.text__00602a10
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN__text__00602a10(ulong param_1) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  uint uVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint uVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  uVar2 = (uint)param_1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (0xfb < (int)uVar2) { // [自动静态注释] 条件判断/分支
    if (0x182 < uVar2) { // [自动静态注释] 条件判断/分支
      return 0; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
    } // [自动静态注释] 作用域/控制流边界
    lVar3 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar1 = _DAT_00759044; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    while (uVar1 != uVar2) { // [自动静态注释] 循环/迭代
      if (lVar3 == 0x86) { // [自动静态注释] 条件判断/分支
        return 0; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
      } // [自动静态注释] 作用域/控制流边界
      if (*(uint *)(lVar3 * 4 + 0x759048) == uVar2) { // [自动静态注释] 条件判断/分支
        lVar3 = lVar3 + 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        break; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      } // [自动静态注释] 作用域/控制流边界
      lVar3 = lVar3 + 2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      uVar1 = *(uint *)(&DAT_00759044 + lVar3 * 4); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } // [自动静态注释] 作用域/控制流边界
    param_1 = (ulong)((int)lVar3 + 0x115); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  return param_1; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


