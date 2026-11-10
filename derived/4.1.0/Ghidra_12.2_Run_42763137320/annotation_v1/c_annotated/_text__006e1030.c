/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_005E1030
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006e1030; name: FUN_.text__006e1030
 */


void FUN__text__006e1030(undefined8 param_1,long param_2,long param_3,uint param_4, // [自动静态注释] 调用尚未恢复正式名称的函数
                        undefined8 param_5,long param_6) // [自动静态注释] 反编译表达式/局部变量；未验证业务语义

{ // [自动静态注释] 作用域/控制流边界
  undefined4 uVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int iVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar7; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar8; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar9; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar10; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar11; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar12; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  if (param_4 == 3) { // [自动静态注释] 条件判断/分支
    uVar6 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    uVar6 = *(undefined8 *)(*(long *)(param_3 + 0x238) + (ulong)param_4 * 8 + 0x340); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  lVar7 = *(long *)(param_3 + 0x418); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar8 = *(undefined8 *)(*(long *)(param_3 + 0x238) + 0x338); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar9 = *(undefined8 *)(param_2 + 0x38); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar10 = *(undefined8 *)(param_6 + 0x30); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar2 = FUN__text__006dd36c(param_1,param_3,param_4,uVar6); // [自动静态注释] 调用尚未恢复正式名称的函数
  if ((uVar2 & 1) != 0) { // [自动静态注释] 条件判断/分支
    uVar1 = *(undefined4 *)(*(long *)(param_3 + 0x238) + 0x3d0); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar3 = FUN__text__006eb02c(param_3 + 0x7a8,*(undefined4 *)(lVar7 + 0x38)); // [自动静态注释] 调用尚未恢复正式名称的函数
    FUN__text__006ed12c(param_1,uVar1,uVar3,0x50,*(undefined8 *)(param_3 + 0x818)); // [自动静态注释] 调用尚未恢复正式名称的函数
    for (lVar11 = *(long *)(lVar7 + 0x18); lVar11 != 0; lVar11 = *(long *)(lVar11 + 0x68)) { // [自动静态注释] 循环/迭代
      if (0 < *(int *)(lVar11 + 0x78)) { // [自动静态注释] 条件判断/分支
        FUN__text__006e1194(param_1,uVar9,uVar10,param_3,uVar6,uVar8,lVar7,lVar11); // [自动静态注释] 调用尚未恢复正式名称的函数
      } // [自动静态注释] 作用域/控制流边界
    } // [自动静态注释] 作用域/控制流边界
    iVar5 = *(int *)(param_3 + 0x230); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (0 < iVar5) { // [自动静态注释] 条件判断/分支
      lVar11 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      lVar12 = 0x18; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      do { // [自动静态注释] 循环/迭代
        lVar4 = *(long *)(*(long *)(param_3 + 0xb0) + lVar12); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        if (((lVar4 != 0) && (*(char *)(lVar4 + 0x90) != '\0')) && (0 < *(int *)(lVar4 + 0x78))) { // [自动静态注释] 条件判断/分支
          FUN__text__006e1194(param_1,uVar9,uVar10,param_3,uVar6,uVar8,lVar7); // [自动静态注释] 调用尚未恢复正式名称的函数
          iVar5 = *(int *)(param_3 + 0x230); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        } // [自动静态注释] 作用域/控制流边界
        lVar11 = lVar11 + 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        lVar12 = lVar12 + 0x20; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      } while (lVar11 < iVar5); // [自动静态注释] 循环/迭代
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


