/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_0045CBC0
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0055cbc0; name: FUN_.text__0055cbc0
 */


int FUN__text__0055cbc0(long param_1,long *param_2,undefined8 param_3,undefined8 param_4, // [自动静态注释] 调用尚未恢复正式名称的函数
                       undefined4 *param_5) // [自动静态注释] 反编译表达式/局部变量；未验证业务语义

{ // [自动静态注释] 作用域/控制流边界
  undefined8 *puVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  byte bVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int iVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fVar7; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  *(undefined8 *)(param_1 + 8) = param_4;
  *(long **)(param_1 + 0x10) = param_2;
  bVar3 = *(byte *)(param_5 + 1); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(uint *)(param_1 + 0x104) = (uint)bVar3;
  *(undefined4 *)(param_1 + 0x108) = *param_5;
  iVar4 = FUN__text__0055d280(param_1 + 0x20,param_2,bVar3,3); // [自动静态注释] 调用尚未恢复正式名称的函数
  if (iVar4 == 1) { // [自动静态注释] 条件判断/分支
    iVar4 = FUN__text__0055d280(param_1 + 0x30,param_2,*(undefined4 *)(param_1 + 0x104),3); // [自动静态注释] 调用尚未恢复正式名称的函数
    if (iVar4 == 1) { // [自动静态注释] 条件判断/分支
      lVar5 = (**(code **)(*param_2 + 0x10)) // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
                        (param_2,(ulong)*(uint *)(param_1 + 0x104) * 0xc,0x70e70d,0x57); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      *(long *)(param_1 + 0x18) = lVar5;
      if (lVar5 == 0) { // [自动静态注释] 条件判断/分支
        return 0x34; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
      } // [自动静态注释] 作用域/控制流边界
      if (*(int *)(param_1 + 0x104) != 0) { // [自动静态注释] 条件判断/分支
        lVar5 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        uVar6 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        do { // [自动静态注释] 循环/迭代
          uVar6 = uVar6 + 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          puVar1 = (undefined8 *)(*(long *)(param_1 + 0x18) + lVar5); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          *puVar1 = 0;
          *(undefined4 *)(puVar1 + 1) = 0;
          lVar2 = *(long *)(param_1 + 0x18) + lVar5; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          lVar5 = lVar5 + 0xc; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          fVar7 = (float)NEON_ucvtf(*(undefined4 *)(param_1 + 0x108)); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          *(float *)(lVar2 + 8) = -251.32742 / fVar7 + 1.0;
        } while (uVar6 < *(uint *)(param_1 + 0x104)); // [自动静态注释] 循环/迭代
      } // [自动静态注释] 作用域/控制流边界
      FUN__text__0055ca1c(*(undefined8 *)(param_1 + 8),param_1 + 0x70); // [自动静态注释] 调用尚未恢复正式名称的函数
      FUN__text__0055cd30(param_1,param_1 + 0x70); // [自动静态注释] 调用尚未恢复正式名称的函数
      iVar4 = 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      FUN__text__0055e72c(*(undefined4 *)(param_1 + 0xec),*(undefined4 *)(param_1 + 0xf0), // [自动静态注释] 调用尚未恢复正式名称的函数
                          param_1 + 0x40,*(undefined4 *)(param_1 + 0xe8),1); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      FUN__text__0055f1e0(*(undefined4 *)(param_1 + 0xf4),param_1 + 0x5c,1); // [自动静态注释] 调用尚未恢复正式名称的函数
      *(undefined4 *)(param_1 + 0x110) = *(undefined4 *)(param_1 + 0x100);
      *(undefined4 *)(param_1 + 0x10c) = *(undefined4 *)(param_1 + 0xfc);
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
  return iVar4; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


