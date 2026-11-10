/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_0002E130
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0012e130; name: FUN_.text__0012e130
 */


void FUN__text__0012e130(long *param_1,long *param_2) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  uint uVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar7; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint uVar8; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar9; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar10; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  lVar5 = *param_2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *param_2 = 0;
  uVar1 = *(uint *)(lVar5 + 0xe8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if ((ulong)uVar1 != 0) { // [自动静态注释] 条件判断/分支
    lVar10 = *param_1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar9 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    do { // [自动静态注释] 循环/迭代
      if (((uVar9 < *(ulong *)(lVar5 + 0xe8)) && // [自动静态注释] 条件判断/分支
          (*(char *)(*(long *)(lVar5 + 0xe0) + uVar9 * 0x18 + 0x10) == '\0')) && // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
         (lVar7 = *(long *)(*(long *)(lVar5 + 0xe0) + uVar9 * 0x18 + 8), lVar7 != 0)) { // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        plVar6 = (long *)(lVar7 + 0x48); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        (**(code **)(*plVar6 + 0x10))(plVar6); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
        lVar2 = *(long *)(lVar10 + 0x20); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        if (*(int *)(lVar2 + 0xc90) != 0) { // [自动静态注释] 条件判断/分支
          uVar8 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          do { // [自动静态注释] 循环/迭代
            lVar2 = FUN__text__001273d4(lVar2,uVar8); // [自动静态注释] 调用尚未恢复正式名称的函数
            uVar3 = FUN__text__005a8324(*(undefined8 *)(lVar2 + 8)); // [自动静态注释] 调用尚未恢复正式名称的函数
            uVar4 = FUN__text__001273f0(*(undefined8 *)(lVar10 + 0x20),uVar8); // [自动静态注释] 调用尚未恢复正式名称的函数
            FUN__text__003e6e68(lVar7,uVar3,uVar4); // [自动静态注释] 调用尚未恢复正式名称的函数
            lVar2 = *(long *)(lVar10 + 0x20); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
            uVar8 = uVar8 + 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          } while (uVar8 < *(uint *)(lVar2 + 0xc90)); // [自动静态注释] 循环/迭代
        } // [自动静态注释] 作用域/控制流边界
        (**(code **)(*plVar6 + 0x18))(plVar6); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      } // [自动静态注释] 作用域/控制流边界
      uVar9 = uVar9 + 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } while (uVar9 != uVar1); // [自动静态注释] 循环/迭代
    if (lVar5 == 0) { // [自动静态注释] 条件判断/分支
      return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
                    /* WARNING: Could not recover jumptable at 0x0012e250. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar5 + 0x48) + 0x18))((long *)(lVar5 + 0x48)); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


