/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_00332A30
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00432a30; name: FUN_.text__00432a30
 */


long FUN__text__00432a30(long *param_1,uint param_2,long param_3,long param_4) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  uint uVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  bool bVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint uVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar7; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar8; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  lVar4 = *param_1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar6 = (ulong)(param_3 - lVar4) >> 3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (0 < param_4 - param_3) { // [自动静态注释] 条件判断/分支
    uVar7 = (ulong)(param_4 - param_3) >> 3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    do { // [自动静态注释] 循环/迭代
      uVar5 = (uint)uVar6; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      uVar1 = uVar5 + (int)(uVar7 >> 1); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      bVar3 = *(uint *)(*(long *)(lVar4 + (ulong)uVar1 * 8) + 8) < param_2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      if (bVar3) { // [自动静态注释] 条件判断/分支
        uVar5 = uVar1 + 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      } // [自动静态注释] 作用域/控制流边界
      uVar6 = (ulong)uVar5; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      uVar8 = uVar7 - bVar3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      uVar7 = uVar8 >> 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } while (1 < uVar8); // [自动静态注释] 循环/迭代
  } // [自动静态注释] 作用域/控制流边界
  lVar2 = (ulong)*(uint *)(param_1 + 1) << 3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (lVar4 != 0) { // [自动静态注释] 条件判断/分支
    lVar2 = lVar4 + (uVar6 & 0xffffffff) * 8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  return lVar2; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


