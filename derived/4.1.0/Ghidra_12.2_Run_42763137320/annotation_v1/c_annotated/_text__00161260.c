/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_00061260
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00161260; name: FUN_.text__00161260
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__00161260(undefined8 *param_1,undefined8 param_2,undefined8 param_3, // [自动静态注释] 调用尚未恢复正式名称的函数
                        undefined8 *param_4,int param_5) // [自动静态注释] 反编译表达式/局部变量；未验证业务语义

{ // [自动静态注释] 作用域/控制流边界
  long *plVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int iVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar7; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 local_44; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  lVar3 = FUN__text__005f3244(*param_4); // [自动静态注释] 调用尚未恢复正式名称的函数
  iVar2 = FUN__text__005f324c(*param_4); // [自动静态注释] 调用尚未恢复正式名称的函数
  plVar1 = _DAT_0089f4d0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (iVar2 != 0) { // [自动静态注释] 条件判断/分支
    uVar7 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    do { // [自动静态注释] 循环/迭代
      lVar6 = *(long *)(*plVar1 + (long)param_5 * 0x20 + 0x1c0); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      if (lVar6 != 0) { // [自动静态注释] 条件判断/分支
        (**(code **)(*(long *)(lVar6 + 0x48) + 0x10))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      } // [自动静态注释] 作用域/控制流边界
      plVar4 = (long *)FUN__text__001625ac(lVar6); // [自动静态注释] 调用尚未恢复正式名称的函数
      uVar5 = (**(code **)(*plVar4 + 0xb0))(plVar4,*(undefined2 *)(lVar3 + uVar7 * 2)); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      (**(code **)(*(long *)(lVar6 + 0x48) + 0x18))((long *)(lVar6 + 0x48)); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      if ((uVar5 & 1) == 0) { // [自动静态注释] 条件判断/分支
        local_44 = 2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        FUN__text__00111970(param_1,param_3,&local_44); // [自动静态注释] 调用尚未恢复正式名称的函数
        iVar2 = FUN__text__005f324c(*param_4); // [自动静态注释] 调用尚未恢复正式名称的函数
        if (iVar2 == 0) { // [自动静态注释] 条件判断/分支
          return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
        } // [自动静态注释] 作用域/控制流边界
        uVar7 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        while( true ) { // [自动静态注释] 循环/迭代
          lVar6 = *(long *)(*plVar1 + (long)param_5 * 0x20 + 0x1c0); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          if (lVar6 != 0) { // [自动静态注释] 条件判断/分支
            (**(code **)(*(long *)(lVar6 + 0x48) + 0x10))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
          } // [自动静态注释] 作用域/控制流边界
          plVar4 = (long *)FUN__text__001625ac(lVar6); // [自动静态注释] 调用尚未恢复正式名称的函数
          uVar5 = (**(code **)(*plVar4 + 0xb0))(plVar4,*(undefined2 *)(lVar3 + uVar7 * 2)); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          (**(code **)(*(long *)(lVar6 + 0x48) + 0x18))((long *)(lVar6 + 0x48)); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
          if ((uVar5 & 1) == 0) break; // [自动静态注释] 条件判断/分支
          uVar7 = uVar7 + 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          uVar5 = FUN__text__005f324c(*param_4); // [自动静态注释] 调用尚未恢复正式名称的函数
          if ((uVar5 & 0xffffffff) <= uVar7) { // [自动静态注释] 条件判断/分支
            return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
          } // [自动静态注释] 作用域/控制流边界
        } // [自动静态注释] 作用域/控制流边界
        FUN__text__005f335c(*param_1,*(undefined2 *)(lVar3 + uVar7 * 2)); // [自动静态注释] 调用尚未恢复正式名称的函数
        return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
      } // [自动静态注释] 作用域/控制流边界
      uVar7 = uVar7 + 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      uVar5 = FUN__text__005f324c(*param_4); // [自动静态注释] 调用尚未恢复正式名称的函数
    } while (uVar7 < (uVar5 & 0xffffffff)); // [自动静态注释] 循环/迭代
  } // [自动静态注释] 作用域/控制流边界
  *param_1 = 0;
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


