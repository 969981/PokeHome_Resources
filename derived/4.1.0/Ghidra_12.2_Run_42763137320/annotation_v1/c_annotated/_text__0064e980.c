/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_0054E980
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0064e980; name: FUN_.text__0064e980
 */


void FUN__text__0064e980(long *param_1,undefined8 *param_2,long param_3,long param_4, // [自动静态注释] 调用尚未恢复正式名称的函数
                        undefined8 param_5) // [自动静态注释] 反编译表达式/局部变量；未验证业务语义

{ // [自动静态注释] 作用域/控制流边界
  ulong uVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 *puVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 *puVar7; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar8; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar9; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  uVar4 = param_2[10]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar6 = param_2[1]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if ((param_4 - uVar4) + param_2[9] <= uVar6 - uVar4) { // [自动静态注释] 条件判断/分支
    uVar1 = param_2[9] + param_4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar2 = uVar4 << 3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (4 < uVar4 >> 0x3d) { // [自动静态注释] 条件判断/分支
      uVar2 = 0xffffffffffffffff; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } // [自动静态注释] 作用域/控制流边界
    if (uVar4 >> 0x3d == 0) { // [自动静态注释] 条件判断/分支
      uVar2 = (uVar4 << 3) / 5; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } // [自动静态注释] 作用域/控制流边界
    if (uVar6 <= uVar2) { // [自动静态注释] 条件判断/分支
      uVar2 = uVar6; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } // [自动静态注释] 作用域/控制流边界
    if (uVar1 <= uVar2) { // [自动静态注释] 条件判断/分支
      uVar1 = uVar2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } // [自动静态注释] 作用域/控制流边界
    if (uVar1 <= uVar6) { // [自动静态注释] 条件判断/分支
      lVar8 = param_2[8]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      lVar5 = (**(code **)(*(long *)*param_2 + 0x10))((long *)*param_2,uVar1 << 5,8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      puVar3 = (undefined8 *)param_2[8]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      FUN__text__0064eb10(param_2,puVar3,param_3,puVar3 + param_2[9] * 4,lVar5,param_4,param_5); // [自动静态注释] 调用尚未恢复正式名称的函数
      if (puVar3 != (undefined8 *)0x0) { // [自动静态注释] 条件判断/分支
        for (lVar9 = param_2[9]; lVar9 != 0; lVar9 = lVar9 + -1) { // [自动静态注释] 循环/迭代
          puVar7 = (undefined8 *)*puVar3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          *puVar3 = 0;
          if (puVar7 != (undefined8 *)0x0) { // [自动静态注释] 条件判断/分支
            (**(code **)*puVar7)(puVar7); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
            (**(code **)(*(long *)puVar3[1] + 0x18))((long *)puVar3[1],puVar7,puVar3[2],puVar3[3]); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
          } // [自动静态注释] 作用域/控制流边界
          puVar3 = puVar3 + 4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        } // [自动静态注释] 作用域/控制流边界
        (**(code **)(*(long *)*param_2 + 0x18))((long *)*param_2,param_2[8],param_2[10] << 5,8); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      } // [自动静态注释] 作用域/控制流边界
      param_2[10] = uVar1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      param_2[8] = lVar5; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      param_2[9] = param_2[9] + param_4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *param_1 = lVar5 + (param_3 - lVar8);
      return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
                    /* WARNING: Subroutine does not return */
  abort(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
} // [自动静态注释] 作用域/控制流边界


