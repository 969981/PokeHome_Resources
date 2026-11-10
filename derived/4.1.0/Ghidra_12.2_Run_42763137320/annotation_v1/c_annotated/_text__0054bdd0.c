/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_0044BDD0
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0054bdd0; name: FUN_.text__0054bdd0
 */


undefined8 // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
FUN__text__0054bdd0(long *param_1,long *param_2,long *param_3,ulong param_4,undefined4 param_5, // [自动静态注释] 调用尚未恢复正式名称的函数
                   long param_6) // [自动静态注释] 反编译表达式/局部变量；未验证业务语义

{ // [自动静态注释] 作用域/控制流边界
  undefined8 *puVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int iVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 uVar7; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 auStack_260 [128]; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  if (*param_1 != 0) { // [自动静态注释] 条件判断/分支
    (**(code **)(*param_2 + 0x18))(param_2); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    *param_1 = 0;
  } // [自动静态注释] 作用域/控制流边界
  *(undefined4 *)(param_1 + 1) = 0;
  if ((param_4 & 0xff) != 0) { // [自动静态注释] 条件判断/分支
    lVar3 = (**(code **)(*param_2 + 0x10))(param_2,(param_4 & 0xff) << 5,0x7147ff,0x43); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *param_1 = lVar3;
    if (lVar3 == 0) { // [自动静态注释] 条件判断/分支
      return 0x34; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
    } // [自动静态注释] 作用域/控制流边界
    *(uint *)(param_1 + 1) = (uint)param_4 & 0xff;
    lVar3 = (long)auStack_260 + (0x200 - ((ulong)((int)(param_4 & 0xff) * 4 + 0xf) & 0x7f0)); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    FUN__text__0054db20(param_3,param_4 & 0xffffffff,param_6 + 0x10,lVar3); // [自动静态注释] 调用尚未恢复正式名称的函数
    if ((int)param_1[1] != 0) { // [自动静态注释] 条件判断/分支
      lVar5 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      uVar6 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      do { // [自动静态注释] 循环/迭代
        lVar4 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        if (*param_1 != 0) { // [自动静态注释] 条件判断/分支
          puVar1 = (undefined8 *)(*param_1 + lVar5); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          puVar1[2] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          puVar1[3] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          *puVar1 = 0;
          puVar1[1] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          lVar4 = *param_1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        } // [自动静态注释] 作用域/控制流边界
        uVar7 = *(undefined4 *)(lVar3 + uVar6 * 4); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        iVar2 = (**(code **)(*param_3 + 0xe0))(param_3); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        FUN__text__0054d0e8(uVar7,lVar4 + lVar5,param_5,param_6,(long)iVar2); // [自动静态注释] 调用尚未恢复正式名称的函数
        uVar6 = uVar6 + 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        lVar5 = lVar5 + 0x20; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      } while (uVar6 < *(uint *)(param_1 + 1)); // [自动静态注释] 循环/迭代
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
  return 1; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


