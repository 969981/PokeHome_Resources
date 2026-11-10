/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_0039B500
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0049b500; name: FUN_.text__0049b500
 */


undefined8 FUN__text__0049b500(long *param_1,long param_2,uint param_3,uint param_4) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  ulong uVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 *puVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 *puVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  uVar1 = FUN__text__00464cf0(); // [自动静态注释] 调用尚未恢复正式名称的函数
  if ((uVar1 & 1) != 0) { // [自动静态注释] 条件判断/分支
    if ((((param_3 & 1) == 0) || (*(long *)(param_2 + 0x18) == 0)) || // [自动静态注释] 条件判断/分支
       (*(long *)(param_2 + 0x10) == 0)) { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      uVar2 = FUN__text__00496290(param_1,param_2,param_3 & 1,param_4 & 1); // [自动静态注释] 调用尚未恢复正式名称的函数
      return uVar2; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
    } // [自动静态注释] 作用域/控制流边界
    uVar1 = (**(code **)(*param_1 + 0x128))(param_1,1); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    for (plVar4 = (long *)param_1[0x25]; plVar4 != (long *)0x0; plVar4 = (long *)*plVar4) { // [自动静态注释] 循环/迭代
      lVar3 = *(long *)(param_2 + 0x18); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      if ((((((plVar4[2] == 0) || (*(long *)(lVar3 + 0x20) == plVar4[2])) && // [自动静态注释] 条件判断/分支
            ((*(int *)(plVar4 + 3) == 0 || (*(int *)(lVar3 + 0x28) == *(int *)(plVar4 + 3))))) && // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
           ((*(int *)(plVar4 + 4) == 0 || (*(int *)(lVar3 + 0x30) == *(int *)(plVar4 + 4))))) && // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
          ((*(char *)(plVar4 + 5) == -1 || (*(char *)(lVar3 + 0x38) == *(char *)(plVar4 + 5))))) && // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
         (((*(char *)(plVar4 + 6) == -1 || (*(char *)(lVar3 + 0x40) == *(char *)(plVar4 + 6))) && // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
          ((plVar4[7] == 0 || (*(long *)(lVar3 + 0x48) == plVar4[7])))))) { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
        if (*(int *)(plVar4 + 0x10) != 0) { // [自动静态注释] 条件判断/分支
          uVar2 = *(undefined8 *)(param_2 + 0x10); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          puVar5 = (undefined8 *)plVar4[0xf]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          do { // [自动静态注释] 循环/迭代
            puVar6 = puVar5 + 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
            FUN__text__00496c40(*puVar5,lVar3,uVar2); // [自动静态注释] 调用尚未恢复正式名称的函数
            puVar5 = puVar6; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          } while (puVar6 != (undefined8 *)(plVar4[0xf] + (ulong)*(uint *)(plVar4 + 0x10) * 8)); // [自动静态注释] 循环/迭代
        } // [自动静态注释] 作用域/控制流边界
        *(int *)(plVar4 + 0xe) = *(int *)(plVar4 + 0xe) + 1;
      } // [自动静态注释] 作用域/控制流边界
    } // [自动静态注释] 作用域/控制流边界
    uVar2 = FUN__text__00496290(param_1,param_2,1,param_4 & 1); // [自动静态注释] 调用尚未恢复正式名称的函数
    if ((uVar1 & 1) != 0) { // [自动静态注释] 条件判断/分支
      return uVar2; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
  return 2; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


