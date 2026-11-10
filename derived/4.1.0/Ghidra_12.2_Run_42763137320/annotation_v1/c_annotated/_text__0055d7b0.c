/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_0045D7B0
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0055d7b0; name: FUN_.text__0055d7b0
 */


void FUN__text__0055d7b0(long param_1,long param_2,undefined4 param_3,int param_4) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  ulong uVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint uVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint uVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint uVar7; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long alStack_410 [128]; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  uVar4 = *(uint *)(param_1 + 0xc); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  lVar5 = (long)alStack_410 + (0x400 - ((ulong)uVar4 * 8 + 0xf & 0xffffffff0)); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (uVar4 != 0) { // [自动静态注释] 条件判断/分支
    if (uVar4 == 1) { // [自动静态注释] 条件判断/分支
      uVar6 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } // [自动静态注释] 作用域/控制流边界
    else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      uVar7 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      uVar6 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      do { // [自动静态注释] 循环/迭代
        uVar2 = param_4 + uVar7; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        plVar3 = (long *)(lVar5 + uVar6 * 8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        uVar6 = uVar6 + 2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        uVar1 = (ulong)uVar7; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        uVar7 = uVar7 + param_4 * 2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        *plVar3 = param_2 + uVar1 * 4;
        plVar3[1] = param_2 + (ulong)uVar2 * 4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      } while (((ulong)uVar4 & 0xfffffffe) != uVar6); // [自动静态注释] 循环/迭代
    } // [自动静态注释] 作用域/控制流边界
    if ((uVar4 & 1) != 0) { // [自动静态注释] 条件判断/分支
      *(ulong *)(lVar5 + uVar6 * 8) = param_2 + (ulong)(uint)((int)uVar6 * param_4) * 4;
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
  FUN__text__0055e170(lVar5,param_3,param_1 + 0x10,param_1); // [自动静态注释] 调用尚未恢复正式名称的函数
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


