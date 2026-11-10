/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_0038F764
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0048f764; name: FUN_.text__0048f764
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN__text__0048f764(long param_1) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  uint uVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  if (*(long *)(param_1 + 8) == 0) { // [自动静态注释] 条件判断/分支
    return 0x501502f9; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
  lVar2 = FUN__text__0045b010(); // [自动静态注释] 调用尚未恢复正式名称的函数
  if (((lVar2 != 0) && (uVar4 = (ulong)*(byte *)(lVar2 + 0x1f8), uVar4 != 0xff)) && // [自动静态注释] 条件判断/分支
     (lVar3 = *(long *)(lVar2 + uVar4 * 0x18 + 0x30), lVar3 != 0)) { // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar1 = *(int *)(lVar2 + uVar4 * 0x18 + 0x38) - 2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (*(float *)(lVar3 + (ulong)uVar1 * 0xc + 4) <= *_DAT_008a4f40) { // [自动静态注释] 条件判断/分支
      uVar4 = (ulong)*(byte *)(lVar2 + 0x1f9); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      if (((uVar4 == 0xff) || (lVar5 = *(long *)(lVar2 + uVar4 * 0x18 + 0x30), lVar5 == 0)) || // [自动静态注释] 条件判断/分支
         (*(float *)(lVar5 + (ulong)(*(int *)(lVar2 + uVar4 * 0x18 + 0x38) - 2) * 0xc + 4) <= // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
          *_DAT_008a4f40)) {
        return *(undefined4 *)(lVar3 + (ulong)uVar1 * 0xc); // [自动静态注释] 返回表达式；具体返回语义取决于调用者
      } // [自动静态注释] 作用域/控制流边界
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
  return 0x501502f9; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


