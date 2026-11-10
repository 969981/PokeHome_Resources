/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_00179DB0
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00279db0; name: FUN_.text__00279db0
 */


uint FUN__text__00279db0(long param_1,uint param_2) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  bool bVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint uVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint uVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint uVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint uVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int *piVar7; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  uVar5 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar4 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  do { // [自动静态注释] 循环/迭代
    uVar3 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar6 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    piVar7 = (int *)(param_1 + (ulong)param_2 * 0x78b8 + 0x30); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    do { // [自动静态注释] 循环/迭代
      if (*piVar7 == 0) break; // [自动静态注释] 条件判断/分支
      if ((uint)piVar7[-2] <= uVar5) { // [自动静态注释] 条件判断/分支
        uVar2 = FUN__text__00279610(param_1,param_2,uVar3 & 0xffffffff); // [自动静态注释] 调用尚未恢复正式名称的函数
        uVar6 = uVar6 + (uVar2 & 1); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      } // [自动静态注释] 作用域/控制流边界
      uVar3 = uVar3 + 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      piVar7 = piVar7 + 0x4e; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } while (uVar3 != 99); // [自动静态注释] 循环/迭代
    if ((uVar6 <= uVar5) || (bVar1 = 0x62 < uVar4, uVar5 = uVar6, uVar4 = uVar4 + 1, bVar1)) { // [自动静态注释] 条件判断/分支
      return uVar5; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
    } // [自动静态注释] 作用域/控制流边界
  } while( true ); // [自动静态注释] 循环/迭代
} // [自动静态注释] 作用域/控制流边界


