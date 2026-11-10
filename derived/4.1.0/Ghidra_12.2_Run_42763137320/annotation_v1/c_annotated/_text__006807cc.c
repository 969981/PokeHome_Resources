/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_005807CC
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006807cc; name: FUN_.text__006807cc
 */


undefined8 FUN__text__006807cc(long *param_1,undefined8 param_2) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  long lVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 *puVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int iVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 *puVar7; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  iVar5 = (int)param_1[3]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if ((ulong)(uint)(iVar5 * 3) < param_1[2] * 4 + 4U) { // [自动静态注释] 条件判断/分支
    iVar5 = iVar5 << 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    lVar1 = FUN__text__00680a08(param_1[1],iVar5,8); // [自动静态注释] 调用尚未恢复正式名称的函数
    if (lVar1 == 0) { // [自动静态注释] 条件判断/分支
      return 0xfffffc7b; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
    } // [自动静态注释] 作用域/控制流边界
    uVar4 = (ulong)*(uint *)(param_1 + 3); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (*(uint *)(param_1 + 3) != 0) { // [自动静态注释] 条件判断/分支
      uVar6 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      do { // [自动静态注释] 循环/迭代
        puVar3 = *(undefined8 **)(*param_1 + uVar6 * 8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        if (puVar3 != (undefined8 *)0x0) { // [自动静态注释] 条件判断/分支
          do { // [自动静态注释] 循环/迭代
            puVar7 = (undefined8 *)*puVar3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
            *puVar3 = 0;
            FUN__text__006808b8(lVar1,iVar5); // [自动静态注释] 调用尚未恢复正式名称的函数
            puVar3 = puVar7; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          } while (puVar7 != (undefined8 *)0x0); // [自动静态注释] 循环/迭代
          uVar4 = (ulong)*(uint *)(param_1 + 3); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        } // [自动静态注释] 作用域/控制流边界
        uVar6 = uVar6 + 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      } while (uVar6 < uVar4); // [自动静态注释] 循环/迭代
    } // [自动静态注释] 作用域/控制流边界
    FUN__text__006809e4(param_1[1],*param_1); // [自动静态注释] 调用尚未恢复正式名称的函数
    *(int *)(param_1 + 3) = iVar5;
    *param_1 = lVar1;
  } // [自动静态注释] 作用域/控制流边界
  else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    lVar1 = *param_1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  uVar2 = FUN__text__006808b8(lVar1,iVar5,param_2); // [自动静态注释] 调用尚未恢复正式名称的函数
  if ((int)uVar2 == 0) { // [自动静态注释] 条件判断/分支
    param_1[2] = param_1[2] + 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  return uVar2; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


