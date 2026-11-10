/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_0039C600
 * 用途/行为：用途尚未确认；代码可观察到：内存复制/初始化, 有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0049c600; name: FUN_.text__0049c600
 */


void FUN__text__0049c600(void *param_1,void *param_2) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  undefined8 *puVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint uVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint uVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar7; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar8; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar9; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 *puVar10; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 local_4c; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 local_44; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined1 uStack_21; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  plVar9 = (long *)((long)param_1 + 0x68); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(undefined8 *)((long)param_1 + 0x240) = *(undefined8 *)((long)param_2 + 0x240);
  uVar7 = *(undefined8 *)((long)param_2 + 0x250); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(undefined8 *)((long)param_1 + 0x248) = *(undefined8 *)((long)param_2 + 0x248);
  *(undefined8 *)((long)param_1 + 0x250) = uVar7;
  if (*plVar9 != 0) { // [自动静态注释] 条件判断/分支
    *(undefined4 *)((long)param_1 + 0x70) = 0;
    FUN__text__00400fc0(0); // [自动静态注释] 调用尚未恢复正式名称的函数
    *(undefined8 *)((long)param_1 + 0x68) = 0;
    *(undefined4 *)((long)param_1 + 0x74) = 0;
  } // [自动静态注释] 作用域/控制流边界
  memcpy(param_1,param_2,200); // [自动静态注释] 内存复制、清零或移动
  *plVar9 = 0;
  *(undefined8 *)((long)param_1 + 0x70) = 0;
  if ((*(int *)((long)param_2 + 0x70) != 0) && // [自动静态注释] 条件判断/分支
     (FUN__text__004628a0(plVar9), *(int *)((long)param_2 + 0x70) != 0)) { // [自动静态注释] 调用尚未恢复正式名称的函数
    puVar10 = *(undefined8 **)((long)param_2 + 0x68); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    do { // [自动静态注释] 循环/迭代
      local_4c = *puVar10; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      local_44 = *(undefined4 *)(puVar10 + 1); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      lVar4 = FUN__text__004626a0(plVar9,&local_4c,&uStack_21); // [自动静态注释] 调用尚未恢复正式名称的函数
      if (lVar4 != 0) { // [自动静态注释] 条件判断/分支
        *(undefined4 *)(lVar4 + 0xc) = *(undefined4 *)((long)puVar10 + 0xc);
      } // [自动静态注释] 作用域/控制流边界
      puVar10 = puVar10 + 2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } while (puVar10 != // [自动静态注释] 循环/迭代
             (undefined8 *) // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
             (*(long *)((long)param_2 + 0x68) + (ulong)*(uint *)((long)param_2 + 0x70) * 0x10)); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  } // [自动静态注释] 作用域/控制流边界
  uVar7 = *(undefined8 *)((long)param_2 + 0xd8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar8 = *(undefined8 *)((long)param_2 + 0xe0); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(undefined4 *)((long)param_1 + 0xe8) = *(undefined4 *)((long)param_2 + 0xe8);
  *(undefined8 *)((long)param_1 + 0xd8) = uVar7;
  *(undefined8 *)((long)param_1 + 0xe0) = uVar8;
  uVar2 = *(uint *)((long)param_2 + 0xd0); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (uVar2 == 0) goto LAB__text__0049c7e0; // [自动静态注释] 条件判断/分支
  uVar3 = *(uint *)((long)param_1 + 0xd0); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if ((uVar3 <= uVar2) && (*(uint *)((long)param_1 + 0xd4) < uVar2)) { // [自动静态注释] 条件判断/分支
    if (*(long *)((long)param_1 + 200) == 0) { // [自动静态注释] 条件判断/分支
      lVar4 = FUN__text__00400f80(0,(ulong)uVar2 * 0x18); // [自动静态注释] 调用尚未恢复正式名称的函数
      if (lVar4 == 0) goto LAB__text__0049c7e0; // [自动静态注释] 条件判断/分支
      lVar6 = *(long *)((long)param_1 + 200); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      if ((lVar6 != 0) && (lVar6 != lVar4)) { // [自动静态注释] 条件判断/分支
        if (uVar3 != 0) { // [自动静态注释] 条件判断/分支
          lVar6 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          do { // [自动静态注释] 循环/迭代
            puVar10 = (undefined8 *)(lVar4 + lVar6); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
            puVar1 = (undefined8 *)(*(long *)((long)param_1 + 200) + lVar6); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
            lVar6 = lVar6 + 0x18; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
            uVar7 = puVar1[1]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
            uVar8 = puVar1[2]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
            *puVar10 = *puVar1;
            puVar10[1] = uVar7; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
            puVar10[2] = uVar8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          } while ((ulong)uVar3 * 0x18 != lVar6); // [自动静态注释] 循环/迭代
          lVar6 = *(long *)((long)param_1 + 200); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        } // [自动静态注释] 作用域/控制流边界
        FUN__text__00400fc0(0,lVar6); // [自动静态注释] 调用尚未恢复正式名称的函数
      } // [自动静态注释] 作用域/控制流边界
    } // [自动静态注释] 作用域/控制流边界
    else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      lVar4 = FUN__text__00400fa0(); // [自动静态注释] 调用尚未恢复正式名称的函数
      if (lVar4 == 0) goto LAB__text__0049c7e0; // [自动静态注释] 条件判断/分支
    } // [自动静态注释] 作用域/控制流边界
    *(long *)((long)param_1 + 200) = lVar4;
    *(uint *)((long)param_1 + 0xd4) = uVar2;
  } // [自动静态注释] 作用域/控制流边界
  *(uint *)((long)param_1 + 0xd0) = uVar2;
  if (uVar2 < 2) { // [自动静态注释] 条件判断/分支
    uVar2 = 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  lVar4 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  do { // [自动静态注释] 循环/迭代
    puVar10 = (undefined8 *)(*(long *)((long)param_2 + 200) + lVar4); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    puVar1 = (undefined8 *)(*(long *)((long)param_1 + 200) + lVar4); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    lVar4 = lVar4 + 0x18; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar7 = *puVar10; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar8 = puVar10[2]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    puVar1[1] = puVar10[1]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    puVar1[2] = uVar8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *puVar1 = uVar7;
  } while ((ulong)uVar2 * 0x18 != lVar4); // [自动静态注释] 循环/迭代
LAB__text__0049c7e0: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uVar2 = *(uint *)((long)param_2 + 0x238); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if ((uVar2 != 0) && (uVar5 = FUN__text__0049c840((long)param_1 + 0xf0,uVar2), (uVar5 & 1) != 0)) { // [自动静态注释] 条件判断/分支
    lVar4 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    do { // [自动静态注释] 循环/迭代
      FUN__text__0049c9c0(*(long *)((long)param_1 + 0x230) + lVar4, // [自动静态注释] 调用尚未恢复正式名称的函数
                          *(long *)((long)param_2 + 0x230) + lVar4);
      lVar4 = lVar4 + 0x28; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } while ((ulong)uVar2 * 0x28 != lVar4); // [自动静态注释] 循环/迭代
  } // [自动静态注释] 作用域/控制流边界
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


